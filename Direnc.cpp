#include "Direnc.h"

	
Direnc::Direnc() //yapıcı
{
	
}

void Direnc::DegerAta(int r) 
{
	R = r; // private R değişkenimize fonksiyona gönderdiğimiz r değişkenini atıyoruz.
}

double Direnc::AkimHesapla(int v)
{
	double i;
	i = double(v)/double(R); // double i değerini hesaplıyoruz
	return i; // i değerimizi döndürüyoruz
}

int Direnc::GerilimHesapla(int i)
{
	int v;
	v = i*R; // V değerimizi hesaplıyoruz
	return v; // v değerimizi döndürüyoruz
}
