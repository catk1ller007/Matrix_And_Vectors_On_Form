#pragma once
#include <iostream>
#include "TVector.h"

template<typename T>
class TMatrix
{
private:
	TVector<TVector<T>> matr;
	int sizematr;
public:
	TMatrix(int size = 0)
	{
		sizematr = size;
		matr = TVector<TVector<T>>(sizematr, 0);
		for (int i = 0; i < sizematr; i++)
		{
			matr[i] = TVector<T>(sizematr - i, i);
		}
	}
	~TMatrix()
	{
	}
	TMatrix(const TMatrix& tmp)
	{
		sizematr = tmp.sizematr;
		matr = tmp.matr;
	}
	TMatrix& operator= (const TMatrix& tmp)
	{
		sizematr = tmp.sizematr;
		matr = tmp.matr;
		return *this;
	}
	TVector<T>& operator[](int k)
	{
		return matr[k];
	}

	TMatrix operator+ (TMatrix tmp)
	{
		TMatrix res;
		if (sizematr = tmp.sizematr)
		{
			res.sizematr = sizematr;
			res.matr = matr + tmp.matr;
		}
		return res;
	}
	TMatrix operator- (TMatrix tmp)
	{
		TMatrix res;
		if (sizematr = tmp.sizematr)
		{
			res.sizematr = sizematr;
			res.matr = matr - tmp.matr;
		}
		return res;
	}
	TMatrix operator* (TMatrix tmp)
	{
		TMatrix res(*this);
		TMatrix C;
		if (sizematr = tmp.sizematr)
		{
			C = TMatrix(sizematr);
			for (int i = 0; i < sizematr; i++)
			{
				for (int j = i; j < sizematr; j++)
				{
					C[i][j] = 0;
					for (int k = i; k <= j; k++)
					{
						C[i][j] += res[i][k] * tmp[k][j];
					}
				}
			}
		}
		return C;
	}
	TMatrix operator* (int k)
	{
		TMatrix res(*this);

		for (int i = 0; i < sizematr; i++)
			res.matr[i] = matr[i] * k;

		return res;
	}
	int GetSizematr()
	{
		return sizematr;
	}

	friend std::istream& operator>>(std::istream& in, TMatrix& v)
	{
		for (int i = 0; i < v.sizematr; i++)
			in >> v.matr[i];
		return in;
	}

	friend std::ostream& operator<<(std::ostream& out, TMatrix& mt)
	{
		for (int i = 0; i < mt.sizematr; i++)
		{
			out << mt.matr[i] << std::endl;
		}
		return out;
	}
};
