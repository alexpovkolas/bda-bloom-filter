#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <fstream>
#include <string>


using namespace std;


void hash_func(string& input, int k, unsigned int m, vector<unsigned int> &result) {
    unsigned int h = hash<string>{}(input);
    result[0] = h  % m;
    for (int i = 1; i < k; ++i) {
        h = h * 1103515245 + 12345;
        result[i] = h % m;
    }
}

bool check_hash_func(string& input, int k, int m, vector<bool> &bits) {
    unsigned int h = hash<string>{}(input);

    if (bits[h % m] == 0) {
        return false;
    }
    for (int i = 1; i < k; ++i) {
        h = h * 1103515245 + 12345;
        if (bits[h % m] == 0) {
            return false;
        }
    }

    return true;
}



int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    unsigned int m = 5000000;
    int k = 6;
    vector<bool> bits(m);
    vector<unsigned int> result(k);
    string str(30, ' ');

    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        int op;
        in >> op >> str;
        //cout << str << endl;
        if (op == 0) {
            out << check_hash_func(str, k, m, bits);
        }
        else {
            hash_func(str, k, m, result);
            for (int j = 0; j < result.size(); ++j) {
                bits[result[j]] = 1;
            }
        }
    }
}