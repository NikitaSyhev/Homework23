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


void max_abc(int *pa, int *pb, int *pc) {
	int max = *pa;
	for (int i = *pb; i <= *pc; i++) {
		if (i > max)
			max = i;
	
	}
	*pa = max;
	*pb = max;
	*pc = max;
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


void null_arr(int arr1[], int arr2[], int length1, int length2) {
	int var = 0;
	for (int i = 0; i < length1; i++)

}



int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;

	std::cout << "Задание 1.\nВведите 3 переменных: ";
	std::cin >> a >> b >> c;
	int* pa = &a; int* pb = &b; int* pc = &c;
	max_abc(&a, &b, &c);
	std::cout << *pa << ' ' << *pb << ' ' << *pc;
	std::cout << "\n\n";


	std::cout << "Задание 2.\n";
	const int size = 5;
	int arr[size];
	fill_arr(arr, size, -100, +100);
	std::cout << "Первоначальный массив: \n";
	show_arr(arr, size);

	std::cout << neg_arr(arr, size) << "\n\n";

	std::cout << "Задание 3: \n";
	const int size1 = 4;
	const int size2 = 4;
	int arr1[size1];
	int arr2[size2];
	std::cout << "Изначальные массивы: \n";
	fill_arr(arr1, size1, -100, 100);
	fill_arr(arr2, size2, -50, 50);

	show_arr(arr1, size1);
	std::cout << '\n';
	show_arr(arr2, size2);

















	return 0;
}