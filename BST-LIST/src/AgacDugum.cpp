/**
* @AgacDugum.cpp
* @Agac sinifi icin Dugum Olusturur.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#include "AgacDugum.hpp"

AgacDugum::AgacDugum(string& vr, AgacDugum *sl = NULL, AgacDugum *sg = NULL){
	veri = vr;
	sol = sl;
	sag = sg;
}

AgacDugum::AgacDugum(string& vr) {
	veri = vr;
	sol = NULL;
	sag = NULL;
}										//Alinan veriler kurucu fonksiyonlar yardimi ile atandi.

AgacDugum::~AgacDugum(){
	delete sag;
	delete sol;
}




