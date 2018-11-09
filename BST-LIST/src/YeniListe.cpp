/**
* @YeniListe.cpp
* @Liste'ye txt ekleme, agac yolu ile kelime ekleme gibi islemleri yapan sinif.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#include "YeniListe.hpp"

void YeniListe::TxtEkle(string dosya_adi) //Hic dugum yoksa yeni dugum olusturur eger onceden bir dugum varsa
									      //temp degiskeni uzerinden sonraki NULL olana kadar gider ve veriyi ekler.
	{		
		if(Lb==NULL)
		{
	    Lb = new listeDugum(dosya_adi);		
		}
		else
		{
			listeDugum *temp;
			temp=Lb;
			while(temp->ileri!=NULL)
			{
				temp=temp->ileri;
			}
			temp->ileri=new listeDugum(dosya_adi);			
		}
	}

	void YeniListe::KelimeEkle(string Kelime,int konum)
	{	
		listeDugum *temp;
		temp = Lb;
		//nesne->Ekle(Kelime);
		for (int i = 1; i < konum; i++)
		{
			temp = temp->ileri;
		}
		temp->agac->Ekle(Kelime);
	}
	
	void YeniListe::listeOku()    //Liste Basini temp'e atarak Sonraki adres NULL olana kadar gider ve okur.
	{
		listeDugum *temp = new listeDugum();	
		temp = Lb;
		while (temp->ileri != NULL)
		{			
			cout << temp->veri << ":" << endl;
			temp->agac->Inorder();
			temp = temp->ileri;
			cout << endl;
		}
		cout << temp->veri << ":" << endl;
		temp->agac->Inorder();
		cout<<endl;
	}
	
	void YeniListe::bul(string word)			
	{
		listeDugum *temp = new listeDugum();    //Liste Basini temp'e atarak Sonraki adres NULL olana kadar gider ve karsilastirma yapar.
		temp = Lb;
		while (temp->ileri != NULL)
		{
			temp->agac->searchKelime(word);

			if (temp->agac->kelime_bulundumu == true)
			{
				cout << "Aranan Kelime " << temp->veri << " dosyasinin icinde" << endl;
				temp->agac->kelime_bulundumu =false;
			}
			temp = temp->ileri;
		}
		temp->agac->searchKelime(word);
		if (temp->agac->kelime_bulundumu == true)
		{
			cout << "Aranan Kelime " << temp->veri << " dosyasinin icinde" << endl;
			temp->agac->kelime_bulundumu = false;
		}
	}
YeniListe::~YeniListe(){                             //Heap'te olusturulan Lb degiskenini siler.
	delete Lb;
}




