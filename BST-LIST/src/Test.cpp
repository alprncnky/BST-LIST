/**
* @Test.cpp 
* @Dosya Yolu verilen txt verilerini agaca atar, liste de dugume yerlestirir.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/

#include "Islem.hpp"
#include "Agac.hpp"
#include "listeDugum.hpp" 
#include "YeniListe.hpp"
using namespace std;

int main()
{
	string aranacak;
	int secim;
	Islem *islem = new Islem();  //Islem Sinifindan nesne olusturuldu.
    islem->oku();                //Dosya yolunu alan ve txt'leri dolaşan oku fonksiyonu cagirildi
	cout<<"1. Arama Yap"<<endl;
	cout<<"2. Listele"<<endl;
	cout<<"3. Cikis"<<endl;
	cout<<"Seciminiz:";
	cin>>secim;
	
while(secim!=3){
	
	if(secim == 1)
	{
	system("cls");
	cout<<"Aranacak Kelimeyi Girin:";
	cin>>aranacak;                     //Aranan kelime kullanicidan alindi ve bulma fonksiyonu cagirildi.
	islem->bulma(aranacak);
	cout<<endl;
	cout<<"1. Arama Yap"<<endl;
	cout<<"2. Listele"<<endl;
	cout<<"3. Cikis"<<endl;
	cout<<"Seciminiz:";
	cin>>secim;
	}
		
	if(secim == 2)
	{
	system("cls");
	islem->inorder_oku();           //Listelemek icin inorder_oku fonksiyonu cagirildi.
	cout<<endl;
	cout<<"1. Arama Yap"<<endl;
	cout<<"2. Listele"<<endl;
	cout<<"3. Cikis"<<endl;
	cout<<"Seciminiz:";
	cin>>secim;
	}
	
}
	cout<<"Program Sonlandirildi."<<endl;
	delete islem;                   //Heap bellek bolgesinde olusturulan islem nesnesi silindi.
	return 0;
}