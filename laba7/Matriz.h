#pragma once
#include"stdafx.h"
#include<iostream>
#include"string"
using namespace std;
template <class T> class Matriza
{
	T **A;
	int N;
	int M;
public:

	Matriza()
	{
		A = 0;
		N = 0;
		M = 0;
	}

	Matriza(int n, int m)
	{
		N = n;
		M = m;
		A = new T*[N];   //столбцы
		for (int i = 0; i < N; i++)
			A[i] = new T[M]; //строки
	}

	~Matriza()
	{
	}

	void create(T x)
	{
		int i, j;
		for (int j = 0;j < M;j++)
		{

			for (int i = 0;i < N;i++)
			{
				A[j][i] = x;
			}
		}

	}
	void show()
	{
		for (int i = 0;i < M;i++)
		{
			for (int j = 0;j < N;j++)
				cout << A[i][j] << "\t";
			cout << "\n";
		}
	}

	Matriza operator+(const Matriza & a)
	{
		Matriza t;
		if (N == a.N && M == a.M)
		{
			t.N = this->N;
			t.M = this->M;
			t.A = new T *[this->M]; //строки

			for (int i = 0; i < t.M; i++)
			{
				t.A[i] = new T[this->N];

				for (int j = 0;j < t.N;j++)
				{
					t.A[i][j] = a.A[i][j] + this->A[i][j];
				}
			}
		}
		return t;
	}

	Matriza operator>(Matriza & a)
	{
		int c = 0;
		for (int i = 0;i < M;i++)
		{
			for (int j = 0;j < N;j++)
				if (A[i][j]>a.A[i][j])
					c++;
		}

		if (c == N*M) return true;
		else return false;

	}
	Matriza operator=(const Matriza & a)
	{

		N = a.N;
		M = a.M;
		A = new T *[N]; //строки
		for (int i = 0; i < N; i++)
		{
			A[i] = new T[M];

			for (int j = 0;j < M;j++)
			{
				A[i][j] = a.A[i][j];
			}

		}
	}
	Matriza operator()(int k)
	{
		for (int i = 0;i < M;i++)
			cout << A[k][i] << " ";
		cout << "\n";
	}
};