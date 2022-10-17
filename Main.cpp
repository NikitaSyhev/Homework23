//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <cstdlib>
#include <ctime>




template <typename T>
void fill_arr(T arr, const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

template <typename T> 
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}


void max_abc(int &pa, int &pb, int &pc) {
	int max = pa < pb ? (pb < pc ? pc : pb) : (pa < pc ? pc : pc);
	pa = max; pb = max; pc = max;
}

int neg_arr(int arr[], int length) {

	int first_index = 0;

	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			first_index = i;
			break;
		}
	}
	if (arr[first_index] < 0)
		return arr[first_index];
	else
		return arr[0];
}


void null_arr(int arr1[], int length1, int arr2[], int length2)
{
	for (int* i = arr1; i < arr1 + length1; i++)
		for (int* j = arr2; j < arr2 + length2; j++)
			if (*j == *i)
				*j = 0;
}




int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;

	std::cout << "Задание 1.\nВведите 3 переменных: ";
	std::cin >> a >> b >> c;
	int* pa = &a; int* pb = &b; int* pc = &c;
	max_abc(a, b, c);
	std::cout << a << ' ' << b << ' ' << c;
	std::cout << "\n\n";


	std::cout << "Задание 2.\n";
	const int size = 5;
	int arr[size];
	fill_arr(arr, size, -100, +100);
	std::cout << "Первоначальный массив: \n";
	show_arr(arr, size);

	std::cout << neg_arr(arr, size) << "\n\n";

	std::cout << "Задание 3: \n";
	const int size1 = 7;
	const int size2 = 6;
	int arr1[size1];
	int arr2[size2];
	std::cout << "Изначальные массивы: \n";
	fill_arr(arr1, size1, -5, 5);
	fill_arr(arr2, size2, -3, 3);

	show_arr(arr1, size1);
	std::cout << '\n';
	show_arr(arr2, size2);
	std::cout << "Массив 2 после вызова функции: \n";
	null_arr(arr1, size1, arr2, size2);
	for (int i = 0; i < size2; i++)
		std::cout << arr2[i] << ' ';


















	return 0;
}