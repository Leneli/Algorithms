/*
Различные слагаемые

По данному числу 1≤n≤10^9 найдите максимальное число k, для которого n можно представить как сумму k различных натуральных слагаемых. 
Выведите в первой строке число k, во второй — k слагаемых.

Sample Input 1:
4
Sample Output 1:
2
1 3

Sample Input 2:
6
Sample Output 2:
3
1 2 3
*/

#include <stdio.h>
#include <iostream>
#include <corecrt_malloc.h>
#include <locale.h>
#include <math.h>

using namespace std;

int main(void) {
	setlocale(LC_ALL, "ru");

	int n, sum; //число
	long k; //количество слагаемых
	int i; //счетчик
	int *components; //массив слогаемых

	cout << "Введите число: ";
	cin >> n;

	k = (sqrt(1 + 8 * n) - 1) / 2;

	cout << "k = " << k << endl;

	components = new int[k];

	components[0] = 1;
	components[k - 1] = n - k * (k - 1) / 2;
	sum = components[0] + components[k];

	if (k > 2) {
		for (i = 1; i < (k - 1); i++) {
			components[i] = components[i - 1] + 1;
		}
	}
	
	for (i = 0; i < k; i++) {
		cout << components[i] << " ";
	}

	delete[]components;

	system("pause");
	return 0;
}