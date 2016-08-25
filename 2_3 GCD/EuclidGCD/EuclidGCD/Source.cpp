/*
По данным двум числам 1≤a, b≤2⋅10^9 найдите их наибольший общий делитель.

Sample Input 1: 18 35
Sample Output 1: 1

Sample Input 2: 14159572 63967072
Sample Output 2: 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int F(int, int);

int main(void) {
	setlocale(LC_ALL, "ru");

	int a, b;
	int GCD; //НОД

	cin >> a >> b; //ввести с клавиатуры сначала А, потом В

	GCD = F(a, b);

	cout << GCD; //вывести на экран НОД

	system("pause");
	return 0;
}

int F(int x, int y)
{
	if (x == 0) { return y; }
	if (y == 0) { return x; }

	if (x >= y) { return F(x%y, y); }
	if (y >= x) { return F(x, y%x); }
}
