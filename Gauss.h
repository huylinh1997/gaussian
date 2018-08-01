#ifndef GAUSS_H
#define GAUSS_H
#include <iostream>
#define max 100
#define n 2
using namespace std;
class Gauss
{
private:
	/*int n;*/
	double A[max][max];
	double x[max];
public:
	Gauss();
	~Gauss();
	void Nhap();
	void Xuat();
	void SapXepThuTu(); // Sap xep thu tu cac phuong trinh, Muc Dich giup khu gauss don gian hon 
	void KhuGauss();
	void GiaiHe();
protected:
};

#endif