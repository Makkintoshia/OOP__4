#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <locale.h>
#include <conio.h>
using namespace std;


class Matrix
{
public:
	int** arr;
	int rows;
	int columns;
public:
	Matrix() {};
	Matrix(int rows, int columns)
	{
		this->rows = rows;
		this->columns = columns;
		arr = new int* [rows];
		cout << "Matrix  :" << endl;
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[columns];
		}

		for (int i = 0; i < rows; i++)
		{
			
			for (int j = 0; j < columns; j++)
			{
				arr[i][j] = 3;
				cout <<  arr[i][j];
			}
			cout << endl;
		}

	}
	friend void result();
};

class Vector
{
private:
	int* vec;
	int size;
public:
	friend Matrix;
	Vector() {};

	Vector(int size)
	{
		cout << "Vector" << endl;
		this->size = size;
		vec = new int[size];
		for (int i = 0; i < size; i++)
		{
			vec[i] = 2;
			cout << vec[i];

		}
		cout  << endl;
	}
	friend void result();
};
void result()
{
	
	for (int j = 0;j < columns;j++)
	{

	}


}

int main()
{
	Matrix matrix(3,3);
	
	Vector vector(3);

	cout << "1";
	return 0;
}