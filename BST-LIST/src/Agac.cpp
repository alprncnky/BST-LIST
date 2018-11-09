/**
* @Agac.cpp 
* @Agac Sinifinda Arama,Ekleme,Inorder siralama islemlerini gerceklestirir.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#include "Agac.hpp"
#include "AgacDugum.hpp"

void Agac::AraveEkle(AgacDugum *&alt_dugum,  string &yeni)  //Agac veri yapisina dugum ekleyen fonksiyon
{
	if (alt_dugum == NULL)
	{
		alt_dugum = new AgacDugum(yeni);
	}
	else if (yeni < alt_dugum->veri)
	{
		AraveEkle(alt_dugum->sol, yeni);
	}
	else if (yeni > alt_dugum->veri)
	{
		AraveEkle(alt_dugum->sag, yeni);
	}
	else return;	//ayni eleman varsa geri don
}

void Agac::Inorder(AgacDugum *alt_dugum) const       //Inorder siralama fonksiyonu
{
	if (alt_dugum != NULL)
	{
		Inorder(alt_dugum->sol);
		cout << alt_dugum->veri << " ";
		Inorder(alt_dugum->sag);
	}
}
	

void Agac::search(AgacDugum *&alt_dugum, string &yeni)			//Agac icerisinde arama fonksiyonu
{
	if (alt_dugum->veri == yeni)
	{
		kelime_bulundumu = true;
	}
	else if (yeni < alt_dugum->veri && alt_dugum->sol != NULL)
	{
		search(alt_dugum->sol, yeni);
	}
	else if (yeni > alt_dugum->veri && alt_dugum->sag != NULL)
	{
		search(alt_dugum->sag, yeni);
	}
	//ayni eleman varsa geri don
}

bool kelime_bulundumu;						//Aranan kelimenin durumuna gore bool deger gönderen degisken

void Agac::Ekle( string &yeni)
{
	AraveEkle(root, yeni);
}

void Agac::Inorder() const
{
	Inorder(root);
}
	

void Agac::searchKelime(string &ab)			
{
	search(root, ab);
}

Agac::~Agac(){
	delete root;
}