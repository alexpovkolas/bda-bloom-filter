В данной задаче необходимо реализовать фильтр Блума.



Операции (аргументы строковые величины):

insert — вставка элемента;
contains — проверка, правда ли элемент был добавлен ранее.
При запросе contains требуется, если элемент на самом деле был ранее добавлен, возвращать «да» во всех случаях, а если элемент на самом деле добавлен не был, то возвращать «нет» хотя бы в 99 % случаев.

Input

В первой строке записано число N запросов к фильтру (10 000 ≤ N ≤ 1 000 000). Далее каждая из N последующих строк состоит из двух элементов: тип запроса и значение запроса, разделённые пробелом. Тип запроса может принимать значение 0 или 1. Если тип равен 1, то значение запроса — объект, который необходимо добавить в фильтр, а если тип равен 0 — объект, для которого необходимо проверить, был ли он добавлен ранее.
Значение запроса — строка длины от 1 до 25, состоящая из больших и малых букв английского алфавита и цифр. Гарантируется, что запросов insert будет не более 600 000, при этом запросов contains с ответом «нет» хотя бы 10 000.

Output

Выходной файл состоит из одной строки, содержащей ответы на все запросы contains в порядке их следования. Каждый из ответов представлен единственным символом: 0, если ответ «нет», или 1, если «да».