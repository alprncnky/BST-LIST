/**
* @listeDugum.cpp
* @Liste veri yapisinin dugumlerini olusturur.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#include "listeDugum.hpp"
#include "agacDugum.hpp"

listeDugum::listeDugum(string adi){
	agac=new Agac();
	veri=adi;
}
listeDugum::~listeDugum(){
	delete ileri;
	delete agac;
}




