#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;
//��������� ������ arr ���������� ������� ��������� �� 
//begin �� end
template <typename T>
void fill_arr(T arr[], const int lenght, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < lenght; i++)
		arr[i] = rand() % (end - begin) + begin;
}
//����� ������� arr � �������
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

	//������ 1. ��� ������
/*	cout << "������ 1.\n";
	cout << "12- "; type_off(12);
	cout << "9.11 -"; type_off(9.11);
	cout << "\'T\' - "; type_off('T');
	cout << "\n";*/

	//������ 2.�������� ����� �� A �� B
	/*cout << "������ 2\n";
	cin >> n >> m;
	cout << "����� ����� �� " << n << "��" << m <<
		"=" << sumA_B(n, m);*/

	//������ 3.  ���������� ��������
	/*cout << "������ 3\n����������� ������:\n";
	const int size3 = 20;
	int arr3[size3];
	fill_arr(arr3, size3, -20, 21);
	show_arr(arr3, size3);
	middle_sort(arr3, size3);
	cout << "�������� ������: \n";
	show_arr(arr3, size3);
	cout << "\n";*/

	//������ 4. ����� �������
	cout << "������ 4\n����������� ������: \n";
	const int size4 = 5;
	int arr4[size4]{ 1, 2, 3, 4, 5 };
	show_arr(arr4, size4);
	cout << "������� ���-�� �������: ";
	cin >> n;
	move_arr(arr4, size4, n);
	cout << "�������� ������: \n";
	show_arr(arr4, size4);



	return 0;
}
//������ 4
template <typename T>
void move_arr(T arr[], const int lenght, int num) {
	if(num >= 0)//������ ������
	for (int j = 0; j < num; j++)
		for (int i = lenght - 2; i >= 0; i--)
			swap(arr[i], arr[i + 1]);
	else//������ �����
		for (int j = num; j < 0; j++)
			for (int i = 0; i < lenght - 1; i++)
				swap(arr[i], arr[i + 1]);
}



//������ 3
/*template <typename T>
void middle_sort(T arr[], const int lenght) {
	int first_index = 0, last_index = 0;

	//������ ������� �������������� ���������
	for (int i = 0; i < lenght; i++)
		if (arr[i] < 0) {
			first_index = i;
			break;
		}
	//������ ���������� �������������� ���������
	for (int i = lenght - 1; i >= 0; i--)
		if (arr[i] < 0) {
			last_index = i;
			break;
		}
	//����������� ����������
	for (int i = last_index - 1; i > 0; i--)
		for (int j = first_index + 1; j < i; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
	
				//������� ����������
	sort(arr + first_index + 1, arr + last_index - 1);

}*/

//������ 2
int sumA_B(int A, int B) {
	if (B == A + 1)
		return A + B;
	return sumA_B(A, B - 1) + B;
}


//������ 1.
void type_off(int num) {
	cout << "INT\n";
}
void type_off(double num) {
	cout << "DOUBLE\n";
}
void type_off(char num) {
	cout << "CHAR\n";
}
