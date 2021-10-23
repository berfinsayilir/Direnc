#include <iostream>
#include "Direnc.h"
#include <locale>

using namespace std;

void menu() // menuy� ekrana basan fonksiyon
{
	cout<<"1-) De�er Ata"<<endl;
	cout<<"2-) Ak�m Hesapla"<<endl;
	cout<<"3-) Gerilim Hesapla"<<endl;
	cout<<"4-) ��k��"<<endl;
	cout<<"L�tfen Bir ��lem Se�iniz : ";
}

int main()
{
	setlocale(LC_ALL, "Turkish"); // T�rk�e karakter kodu
	int islem,r,i,v;
	Direnc d; // S�n�f�m�z� nesneye d�n��t�r�yoruz
	
	bool dkontrol = true,kontrol = false;
	while(true) // S�rekli sormas� i�in d�ng�
	{
		menu(); // menuyu ekrana bas�yoruz
		cin>>islem; // kullan�cadan bir islem secmesini istiyoruz
		
		switch(islem) // Kullan�c�n�n se�imine g�re i�lem yap�yoruz
		{
			case 1: //De�er Atama B�l�m�
				cout<<"L�tfen R(Direnc) De�erini Giriniz : ";
				cin>>r;
				d.DegerAta(r); // s�n�f�m�zdaki DegerAta Fonksiyonuna r de�i�kenini g�nderiyoruz.
				kontrol = true; // di�er men�lere giri� izni veriyoruz
				break;
			case 2:
				if(kontrol) // de�er atamas� yap�ld���n� kontrol eden yap�
				{
					cout<<"L�tfen V(Gerilim) De�erini Giriniz : ";
					cin>>v;
					cout<<"I(Ak�m) : "<<d.AkimHesapla(v)<<endl;; // Ak�mHesapla Fonksiyonuna v de�i�kenini g�nderiyoruz
					
				}
				else
				{
					cout<<"L�tfen �nce De�er Atay�n�z !"<<endl;
				}
				break;
			case 3:
				if(kontrol) // de�er atamas� yap�ld���n� kontrol eden yap�
				{
					cout<<"L�tfen I(Ak�m) De�erini Giriniz : ";
					cin>>i;
					cout<<"V(Gerilim) : "<<d.GerilimHesapla(i)<<endl;; // GerilimHesapla Fonksiyonuna i de�i�kenini g�nderiyoruz
				}
				else
				{
					cout<<"L�tfen �nce De�er Atay�n�z !"<<endl;
				}
				break;
			case 4:
				dkontrol = false; // program� sonland�r�yoruz
				break;
		}
		
		
	}
	
	
	return 0;
}
