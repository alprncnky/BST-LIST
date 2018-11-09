/**
* @AgacDugum.hpp
* @Agac sinifi icin Dugum Olusturur.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#ifndef AGACDUGUM_HPP
#define AGACDUGUM_HPP

#include <iostream>

using namespace std;

class AgacDugum{
	public:
	string veri;				//Agac dugumlerine eklenecek kelimeleri tutmak icin string cinsinden degisken.
	AgacDugum *sag;
	AgacDugum *sol;				//sag ve sol taraflari gosterecek pointerler.
	AgacDugum(string& vr, AgacDugum *sl , AgacDugum *sg );
	AgacDugum(string& vr);      //AgacDugum kurucu fonksiyonlari.
	~AgacDugum();
};


#endif