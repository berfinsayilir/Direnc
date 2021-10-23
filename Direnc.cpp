#include "Direnc.h"

	
Direnc::Direnc() //yapýcý
{
	
}

void Direnc::DegerAta(int r) 
{
	R = r; // private R deðiþkenimize fonksiyona gönderdiðimiz r deðiþkenini atýyoruz.
}

double Direnc::AkimHesapla(int v)
{
	double i;
	i = double(v)/double(R); // double i deðerini hesaplýyoruz
	return i; // i deðerimizi döndürüyoruz
}

int Direnc::GerilimHesapla(int i)
{
	int v;
	v = i*R; // V deðerimizi hesaplýyoruz
	return v; // v deðerimizi döndürüyoruz
}
