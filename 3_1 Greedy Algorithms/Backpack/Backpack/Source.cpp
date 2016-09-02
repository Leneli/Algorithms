/*
Первая строка содержит количество предметов 1≤n≤10^3 и вместимость рюкзака 0≤W≤2⋅10^6. Каждая из следующих n строк задаёт стоимость 0≤ci≤2⋅10^6 и объём 0<wi≤2⋅10^6 предмета (n, W, ci, wi — целые числа). Выведите максимальную стоимость частей предметов (от каждого предмета можно отделить любую часть, стоимость и объём при этом пропорционально уменьшатся), помещающихся в данный рюкзак, с точностью не менее трёх знаков после запятой.
*/

#include <stdio.h>
#include <iostream>
#include <corecrt_malloc.h>
#include <locale.h>

using namespace std;

void bubbleSort(float**, int);

int main(void) {
	setlocale(LC_ALL, "ru");

	int n; //количество предметов = длина массивов
	int W; //вместимость рюкзака
	int i, j;
	float **items; //массив предметов (предмет - его полная стоимость - стоимость его 1 части)
	float maxCost;

	cout << "Укажите количество предметов (n) и вместимость рюкзака(W) ";
	cin >> n >> W;

	items = new float*[n];

	for (i = 0; i < n; i++) {
		items[i] = new float[3];

		for (j = 0; j < 2; j++) {
			cin >> items[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		items[i][2] = items[i][0] / items[i][1];
 	}

	//сортировка по стоимости на единицу объема от большего к меньшему
	bubbleSort(items, n);

	maxCost = 0;

	for (i = 0; i < n; i++) {
		if (items[i][1] <= W) {
			maxCost += items[i][1] * items[i][2];
			W -= items[i][1];

			cout << W << endl;
			cout << fixed << maxCost << endl;
		}
		else {
			maxCost += W * items[i][2];
			W = 0;
		}
	}

	cout << fixed << maxCost << endl;

	system("pause");
	return 0;
}


void bubbleSort(float **array, int size) {
	float tmp_0, tmp_1, tmp_2; //временные переменные
	int k, m; //счетчики проходов по массиву

	for (k = 0; k < (size - 1); k++) { //k - номер прохода
		for (m = 0; m < (size - 1); m++) { //внутренний цикл прохода
			if (array[m + 1][2] > array[m][2]) {
				tmp_2 = array[m + 1][2];
				tmp_1 = array[m + 1][1];
				tmp_0 = array[m + 1][0];

				array[m + 1][2] = array[m][2];
				array[m + 1][1] = array[m][1];
				array[m + 1][0] = array[m][0];

				array[m][2] = tmp_2;
				array[m][1] = tmp_1;
				array[m][0] = tmp_0;
			}
		}
	}
}
