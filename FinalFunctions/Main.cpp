#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;
//Заполняет массив arr случайными числами диапазона от 
//begin до end
template <typename T>
void fill_arr(T arr[], const int lenght, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < lenght; i++)
		arr[i] = rand() % (end - begin) + begin;
}
//Вывод массива arr в консоль
template <typename T>
void show_arr(T arr[], const int lenght) {
	cout << '[';
	for (int i = 0; i < lenght; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
template <typename T>
void middle_sort(T arr[], const int lenght);

void type_off(int num);
void type_off(double num);
void type_off(char num);

int sumA_B(int A, int B);

template <typename T>
void move_arr(T arr[], const int lenght, int num);


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Задача 1. Тип данных
/*	cout << "Задача 1.\n";
	cout << "12- "; type_off(12);
	cout << "9.11 -"; type_off(9.11);
	cout << "\'T\' - "; type_off('T');
	cout << "\n";*/

	//Задача 2.Рекурсия суммы от A до B
	/*cout << "Задача 2\n";
	cin >> n >> m;
	cout << "Сумма чисел от " << n << "до" << m <<
		"=" << sumA_B(n, m);*/

	//Задача 3.  Сортировка середины
	/*cout << "Задача 3\nИзначальный массив:\n";
	const int size3 = 20;
	int arr3[size3];
	fill_arr(arr3, size3, -20, 21);
	show_arr(arr3, size3);
	middle_sort(arr3, size3);
	cout << "Итоговый массив: \n";
	show_arr(arr3, size3);
	cout << "\n";*/

	//Задача 4. Сдвиг массива
	cout << "Задача 4\nИзначальный массив: \n";
	const int size4 = 5;
	int arr4[size4]{ 1, 2, 3, 4, 5 };
	show_arr(arr4, size4);
	cout << "Введите кол-во сдвигов: ";
	cin >> n;
	move_arr(arr4, size4, n);
	cout << "Итоговый массив: \n";
	show_arr(arr4, size4);



	return 0;
}
//Задача 4
template <typename T>
void move_arr(T arr[], const int lenght, int num) {
	if(num >= 0)//Сдвиги вправо
	for (int j = 0; j < num; j++)
		for (int i = lenght - 2; i >= 0; i--)
			swap(arr[i], arr[i + 1]);
	else//Сдвиги влево
		for (int j = num; j < 0; j++)
			for (int i = 0; i < lenght - 1; i++)
				swap(arr[i], arr[i + 1]);
}



//Задача 3
/*template <typename T>
void middle_sort(T arr[], const int lenght) {
	int first_index = 0, last_index = 0;

	//Индекс первого отрицательного эелемента
	for (int i = 0; i < lenght; i++)
		if (arr[i] < 0) {
			first_index = i;
			break;
		}
	//Индекс последнего отрицательного эелемента
	for (int i = lenght - 1; i >= 0; i--)
		if (arr[i] < 0) {
			last_index = i;
			break;
		}
	//Пузырьковая сортировка
	for (int i = last_index - 1; i > 0; i--)
		for (int j = first_index + 1; j < i; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
	
				//Быстрая сортировка
	sort(arr + first_index + 1, arr + last_index - 1);

}*/

//Задача 2
int sumA_B(int A, int B) {
	if (B == A + 1)
		return A + B;
	return sumA_B(A, B - 1) + B;
}


//Задача 1.
void type_off(int num) {
	cout << "INT\n";
}
void type_off(double num) {
	cout << "DOUBLE\n";
}
void type_off(char num) {
	cout << "CHAR\n";
}
