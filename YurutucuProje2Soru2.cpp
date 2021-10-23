#include <iostream>
#include "Direnc.h"
#include <locale>

using namespace std;

void menu() // menuyü ekrana basan fonksiyon
{
	cout<<"1-) Deðer Ata"<<endl;
	cout<<"2-) Akým Hesapla"<<endl;
	cout<<"3-) Gerilim Hesapla"<<endl;
	cout<<"4-) Çýkýþ"<<endl;
	cout<<"Lütfen Bir Ýþlem Seçiniz : ";
}

int main()
{
	setlocale(LC_ALL, "Turkish"); // Türkçe karakter kodu
	int islem,r,i,v;
	Direnc d; // Sýnýfýmýzý nesneye dönüþtürüyoruz
	
	bool dkontrol = true,kontrol = false;
	while(true) // Sürekli sormasý için döngü
	{
		menu(); // menuyu ekrana basýyoruz
		cin>>islem; // kullanýcadan bir islem secmesini istiyoruz
		
		switch(islem) // Kullanýcýnýn seçimine göre iþlem yapýyoruz
		{
			case 1: //Deðer Atama Bölümü
				cout<<"Lütfen R(Direnc) Deðerini Giriniz : ";
				cin>>r;
				d.DegerAta(r); // sýnýfýmýzdaki DegerAta Fonksiyonuna r deðiþkenini gönderiyoruz.
				kontrol = true; // diðer menülere giriþ izni veriyoruz
				break;
			case 2:
				if(kontrol) // deðer atamasý yapýldýðýný kontrol eden yapý
				{
					cout<<"Lütfen V(Gerilim) Deðerini Giriniz : ";
					cin>>v;
					cout<<"I(Akým) : "<<d.AkimHesapla(v)<<endl;; // AkýmHesapla Fonksiyonuna v deðiþkenini gönderiyoruz
					
				}
				else
				{
					cout<<"Lütfen Önce Deðer Atayýnýz !"<<endl;
				}
				break;
			case 3:
				if(kontrol) // deðer atamasý yapýldýðýný kontrol eden yapý
				{
					cout<<"Lütfen I(Akým) Deðerini Giriniz : ";
					cin>>i;
					cout<<"V(Gerilim) : "<<d.GerilimHesapla(i)<<endl;; // GerilimHesapla Fonksiyonuna i deðiþkenini gönderiyoruz
				}
				else
				{
					cout<<"Lütfen Önce Deðer Atayýnýz !"<<endl;
				}
				break;
			case 4:
				dkontrol = false; // programý sonlandýrýyoruz
				break;
		}
		
		
	}
	
	
	return 0;
}
