#include "Direnc.h"

	
Direnc::Direnc() //yap�c�
{
	
}

void Direnc::DegerAta(int r) 
{
	R = r; // private R de�i�kenimize fonksiyona g�nderdi�imiz r de�i�kenini at�yoruz.
}

double Direnc::AkimHesapla(int v)
{
	double i;
	i = double(v)/double(R); // double i de�erini hesapl�yoruz
	return i; // i de�erimizi d�nd�r�yoruz
}

int Direnc::GerilimHesapla(int i)
{
	int v;
	v = i*R; // V de�erimizi hesapl�yoruz
	return v; // v de�erimizi d�nd�r�yoruz
}
