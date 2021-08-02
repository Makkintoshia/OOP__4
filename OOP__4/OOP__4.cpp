#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <locale.h>
#include <conio.h>
using namespace std;

class Vector;
class Matrix
{
private:
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
	friend void result(Matrix matrix, Vector vector);
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
			cout << vec[i]<<endl;

		}
		cout  << endl;
	}
	friend void result(Matrix matrix, Vector vector);
};



void result(Matrix matrix, Vector vector)
{
	int* res_vector;
	res_vector = new int[vector.size];
	for (int k = 0; k < vector.size;k++)
	{
		 res_vector[k]=0;
	}

	for (int i = 0;i < matrix.columns;i++)
	{
		for (int j = 0; j < matrix.rows; j++)
		{
			res_vector[i] += matrix.arr[i][j] * vector.vec[j];

		}
	}
	cout << "Result multiply vector and matrix"<<endl;
	for (int k = 0; k < vector.size;k++)
	{
		cout << res_vector[k] << endl;
	}

}

int main()
{
	Matrix matrix(3,3);
	
	Vector vector(3);
	
	result( matrix,vector);
	
	return 0;
}