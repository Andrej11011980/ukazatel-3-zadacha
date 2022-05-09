/*Написать следующие функции для работы с динамическим массивом:
■ Функция распределения динамической памяти;
■ Функция инициализации динамического массива;
■ Функция печати динамического массива;
■ Функция удаления динамического массива;
■ Функция добавления элемента в конец массива;
■ Функция вставки элемента по указанному индексу;
■ Функция удаления элемента по указанному индексу*/

#include <iostream>
using namespace std;
template <class T>
void Array_New(T*& arr, int size)  //   функция выделения динамической памяти под массив
{
	arr = new T[size];
}

template <class T>
void SetRandArr(T*& arr, int size)  //   функция инициализации динамического массива случайными числами
{
	srand(time(0));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100 + 1;
}

template <class T>
void showArr(T*& arr, int size)  //   функция показа динамического массива на экран консоли
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ",   ";
	cout << "\n";
}

template <class T>
void DelArr(T*& arr) //   функция очистки памяти от динамического массива
{
	delete[] arr;
	arr = nullptr;
}

template <class T>
void NewFinishElement(T*& arr, int& size)  //   функция добавления элемента в конец массива
{
	T* arr1 = new int[size + 1];

	for (int i = 0; i < size; i++)
		arr1[i] = arr[i];

	delete[] arr;
	size++;
	arr = arr1;
}

template <class T>
void NewNumElement(T*& arr, int& size, int num) //  функция вставки элемента по указанному индексу
{
	T* arr1 = new int[size + 1];

	for (int i = 0; i < size + 1; i++)
	{
		if (i < num) arr1[i] = arr[i];
		else if (i == num) arr1[i] = 0;
		else if (i > num) arr1[i] = arr[i - 1];
	}

	delete[] arr;
	size++;
	arr = arr1;
}

template <class T>
void DelNumElement(T*& arr, int& size, int num)  //  функция удаления элемента по указанному индексу
{
	T* arr1 = new int[size - 1];

	for (int i = 0; i < size; i++)
	{
		if (i < num) arr1[i] = arr[i];
		else if (i == num) continue;
		else if (i > num) arr1[i - 1] = arr[i];
	}

	delete[] arr;
	size--;
	arr = arr1;
}

int main()
{

}

