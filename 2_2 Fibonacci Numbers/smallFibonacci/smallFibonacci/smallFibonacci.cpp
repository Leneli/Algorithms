/*
Задача: небольшое число Фибоначчи
Дано целое число 1≤n≤40, необходимо вычислить n-е число Фибоначчи(напомним, что F0 = 0, F1 = 1 и Fn = Fn−1 + Fn−2 при n≥2).

По договоренности на курсе, не надо делать проверку вводимых в программу данных, они гарантированно соответствуют указанным в задаче условиям.
*/

#include "stdafx.h"

int F(int);

int main()
{
	setlocale(LC_ALL, "ru");

	int n, Fib;

	std::cin >> n; //ввод числа с клавиатуры

	Fib = F(n);

	std::cout << Fib; //вывод на экран полученного числа Фибоначчи

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
		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
	}

	return fibArray[x];
}
