/*
Задача: кодирование Хаффмана

По данной непустой строке s длины не более 10^4, состоящей из строчных букв латинского алфавита, постройте оптимальный беспрефиксный код. В первой строке выведите количество различных букв k, встречающихся в строке, и размер получившейся закодированной строки. В следующих k строках запишите коды букв в формате "letter: code". В последней строке выведите закодированную строку.

Sample Input 1:
a
Sample Output 1:
1 1
a: 0
0

Sample Input 2:
abacabad
Sample Output 2:
4 14
a: 0
b: 10
c: 110
d: 111
01001100100111
*/

#include <stdio.h>
#include <iostream>
#include <corecrt_malloc.h>
#include <locale.h>
#include <string>

using namespace std;

int main(void) {
	setlocale(LC_ALL, "ru");

	string str; //строка
	unsigned int i; //счетчик
	unsigned int k; //количество разных символов в строке

	cout << "Введите страоку: ";
	cin >> str;
	
	//Поиск количества разных символов в строке
	k = 1;
	for (i = 1; i < str.size(); i++) {
		
	}

	system("pause");
	return 0;
}