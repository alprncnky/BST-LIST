/**
* @YeniListe.hpp
* @Liste'ye txt ekleme, agac yolu ile kelime ekleme gibi islemleri yapan sinif.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#ifndef YENILISTE_HPP
#define YENILISTE_HPP

#include "listeDugum.hpp"
using namespace std;

class YeniListe
{
public:
	listeDugum *Lb=NULL;             //Liste basini tutan pointer
	void TxtEkle(string dosya_adi);   //Listeye txt'lerin adlarini ekleyen fonksiyon.
	void KelimeEkle(string Kelime,int konum); //Kelimeleri agaca eklemeyen fonksiyon.
	void listeOku();                     //Listeyi okumayan fonksiyon.
	void bul(string word);
	~YeniListe();
};


#endif