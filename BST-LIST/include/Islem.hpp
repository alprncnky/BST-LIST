/**
* @Islem.hpp
* @main sinifinda calisacak sinif.Inorder okuma,bulma islemini yapar.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#ifndef ISLEM_HPP
#define ISLEM_HPP

#include"YeniListe.hpp"
using namespace std;

class Islem
{
public:	
	YeniListe *liste = new YeniListe();  //Liste sinifindan nesne olusturuldu.
	void inorder_oku();
	void bulma(string abc);
	void oku();
	~Islem();
};


#endif