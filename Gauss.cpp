#include "Gauss.h"

void Gauss::Nhap()
{
	A[0][0] = 1;
	A[0][1] = 1;
	A[1][0] = 2;
	A[1][1] = 0;
	int p;
	cout << "\n Nhap gia tri cua trong luong ";
	cin >> p;
	A[0][2] = p;
	A[1][2] = p;
	/*cout << "\n Nhap so phuong trinh cua he ? :  ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
		if (i == 0)
		{
			cout << "\n Nhap vao gia tri cua trong luc : ";
			cin >> A[i][n ];
		}
		else A[i][n] = A[i - 1][n];
	}*/

}
void Gauss::Xuat()
{
	cout << "\n =============== \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << (double)A[i][j] << "     ";
		}
		cout << endl;
	}
}

void Gauss::SapXepThuTu()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int k = i + 1; k < n; k++)
		{
			if (A[i][i] < A[k][i])
				for (int j = 0; j <= n; j++)
				{
					double Temp = A[i][j];
					A[i][j] = A[k][j];
					A[k][j] = Temp;
				}
		}
	}

}
void Gauss::KhuGauss()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int k = i + 1; k < n; k++)
		{
			double m = A[k][i] / A[i][i];
			for (int j = 0; j <= n; j++)
			{
				A[k][j] = A[k][j] - m * A[i][j];
			}
		}
	}

}
void Gauss::GiaiHe()
{
	/*SapXepThuTu();
	KhuGauss();*/
	for (int i = n - 1; i >= 0; i--)
	{
		x[i] = A[i][n];
		for (int j = 0; j < n; j++)
			if (i != j)
				x[i] = x[i] - A[i][j] * x[j];
		x[i] = x[i] / A[i][i];
	}
	cout << "\n Cac reaction force la : ";
	for (int i = 0; i < n; i++)
	{
		if(i== 0)
		{
			cout << "\n Ay = " << (double)x[i];
		}
		if (i == 1)
		{
			cout << "\n By = " << (double)x[i] ;
		}
	}
}
Gauss::Gauss()
{
}

Gauss::~Gauss()
{
}