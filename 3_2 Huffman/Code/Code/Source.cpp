/*
������: ����������� ��������

�� ������ �������� ������ s ����� �� ����� 10^4, ��������� �� �������� ���� ���������� ��������, ��������� ����������� ������������� ���. � ������ ������ �������� ���������� ��������� ���� k, ������������� � ������, � ������ ������������ �������������� ������. � ��������� k ������� �������� ���� ���� � ������� "letter: code". � ��������� ������ �������� �������������� ������.

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

	string str; //������
	unsigned int i; //�������
	unsigned int k; //���������� ������ �������� � ������

	cout << "������� �������: ";
	cin >> str;
	
	//����� ���������� ������ �������� � ������
	k = 1;
	for (i = 1; i < str.size(); i++) {
		
	}

	system("pause");
	return 0;
}