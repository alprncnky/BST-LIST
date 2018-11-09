/**
* @listeDugum.hpp
* @Liste veri yapisinin dugumlerini olusturur.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#ifndef LISTEDUGUM_HPP
#define LISTEDUGUM_HPP

#include "Agac.hpp"
using namespace std;

class listeDugum{  //Liste'ye dugum olusturan sinif.
	public:
	listeDugum *ileri = NULL;  //Bir sonraki elemanin adresini tutan pointer
	string veri;		
	Agac *agac;
	listeDugum(){};
	listeDugum(string adi);
	~listeDugum();            //Kurucu ve yikici fonksiyonlar.
	
};


#endif