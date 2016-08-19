/*
Даны целые числа 1≤n≤10^18 и 2≤m≤10^5, необходимо найти остаток от деления n-го числа Фибоначчи на m.

Sample Input: 10 2
Sample Output: 1
*/

#include <stdio.h>
#include <iostream>
#include <corecrt_malloc.h>
#include <locale.h>

int F(int);
void Multopli(int *arr1, const int* arr2);

int main(void) {
	setlocale(LC_ALL, "ru");

	int n, m, mod; //номер числа Фибоначчи, делитель, остаток от деления

	std::cin >> n >> m;

	mod = F(n) % m;

	std::cout << mod;

	system("pause");
	return 0;
}

//Вычисление n-го числа Фибоначчи методом перемножения матриц
int F(int x)
{
	int M[] = {0, 1, 1, 1}; //Матрица из формулы
	int Result[] = {1, 0, 0, 1}; //Единичная матрица
								 //Result[1] - искомое число Фибоначчи
	while (x) {
		/*
		Сейчас M[] - это M^(2^k), где k - номер итерации цикла (начиная с 0)
		То есть заданное число n (номер числа Фибоначчи) представили в двоичной форме как произмедение M^(2^k)
		И если двоичная степень n заканчивается на 1, то перемножаем матрицы
		*/
		if (x & 1) {
			Multopli(M, Result);
		}
		//Возводим M[] в квадрат
		Multopli(M, M);
		//Убираем младшую двоичную цифру n
		x >>= 1;
	}

	//Теперь Result[] - искомая матрица M^n, и можно вернуть ее правый верхний элемент, то есть Result[1]
	return Result[1];
}

//Перемножение двух квадратных матриц 2х2
void Multopli(int *arr1, const int* arr2)
{
	int r0, r1, r2, r3;

	r0 = arr1[0] * arr2[0] + arr1[1] * arr2[2];
	r1 = arr1[0] * arr2[1] + arr1[1] * arr2[3];
	r2 = arr1[2] * arr2[0] + arr1[3] * arr2[2];
	r3 = arr1[2] * arr2[1] + arr1[3] * arr2[3];

	arr1[0] = r0;
	arr1[1] = r1;
	arr1[2] = r2;
	arr1[3] = r3;
}
