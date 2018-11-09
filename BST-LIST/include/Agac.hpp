/**
* @Agac.hpp
* @Agac Sinifinda Arama,Ekleme,Inorder siralama islemlerini gerceklestirir.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#ifndef AGAC_HPP
#define AGAC_HPP

#include "AgacDugum.hpp"
#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>


using namespace std;

class Agac{
private:
	AgacDugum *root;

	void AraveEkle(AgacDugum*&,string&);

	void Inorder(AgacDugum*) const;

	void search(AgacDugum*&, string&);
public:
	
	bool kelime_bulundumu=false;
	
	void Ekle(string &);

	void Inorder() const;
	
	void searchKelime(string &);	
	
	~Agac();

};


#endif