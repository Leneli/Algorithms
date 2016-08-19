/*
Дано число 1≤n≤10^7, необходимо найти последнюю цифру n-го числа Фибоначчи.

Как мы помним, числа Фибоначчи растут очень быстро, поэтому при их вычислении нужно быть аккуратным с переполнением. В данной задаче, впрочем, этой проблемы можно избежать, поскольку нас интересует только последняя цифра числа Фибоначчи: если 0≤a, b≤9 — последние цифры чисел Fi и Fi+1 соответственно, то (a+b)mod10 — последняя цифра числа Fi+2.

Sample Input: 193150
Sample Output: 5
*/

#include <stdio.h>
#include <iostream>
#include <corecrt_malloc.h>
#include <locale.h>

int F(int);

int main(void) {
	setlocale(LC_ALL, "ru");

	int n, modFib;

	std::cout << "Укажите номер числа Фибоначчи: n = ";
	std::cin >> n;

	modFib = F(n);

	std::cout << "Последняя цифра указанного числа Фибоначчи... ";
	std::cout << modFib;
	std::cout << "\n";

	system("pause");
	return 0;
}

int F(int x)
{
	int *fibArray, i;

	fibArray = new int[x];

	fibArray[0] = 0;
	fibArray[1] = 1;

	for (i = 2; i <= x; i++) {
		fibArray[i] = (fibArray[i - 1] + fibArray[i - 2]) %10;
	}

	return fibArray[x];
}
