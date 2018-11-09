/**
* @Islem.cpp
* @main sinifinda calisacak sinif.Inorder okuma,bulma islemini yapar.
* @1.Ogretim A Grubu
* @Veri Yapilari Dersi 3. Odevi
* @9.12.2017
* @Kadir ARSLAN kadir.arslan1@ogr.sakarya.edu.tr && Alperen CINKAYA alperen.cinkaya@ogr.sakarya.edu.tr
*/


#include "Islem.hpp"

	void Islem::inorder_oku()       //Olusturulan islem nesnesinden inorder okumaya yarayan fonksiyon.
	{
		liste->listeOku();
	}
	
	void Islem::bulma(string abc)  //Olusturulan islem nesnesinden aranan kelimeyi bulmaya yarayan fonksiyon.
	{
		liste->bul(abc);
	}
	
	void Islem::oku()             //Olusturulan islem nesnesinden girilen dosya yolundaki txt'leri ceken ve okuyan fonksiyon.
	{
	ifstream inputFile;
	WIN32_FIND_DATA FindData;
	HANDLE hFind;

	cout << "Klasor:";
	string input;
	cin >> input;	
	char path[100];											 
	strncpy(path, input.c_str(), sizeof(path));
	path[sizeof(path) - 1] = 0;
	SetCurrentDirectory(path);	
	hFind = FindFirstFile("*.txt", &FindData);					//ilk elemani while a girmiyor
														
		inputFile.open(FindData.cFileName);
		liste->TxtEkle(FindData.cFileName);
		string words;
		while(inputFile>>words)
		{ 
			liste->KelimeEkle(words,1);
		}
	inputFile.close();
	
	int konumsayi = 2;
	while (FindNextFile(hFind, &FindData))
	{	
		liste->TxtEkle(FindData.cFileName);
		ifstream inputFile;
		inputFile.open(FindData.cFileName);
		string words;
		while(inputFile>>words)
		{
			liste->KelimeEkle(words,konumsayi);
		}
		konumsayi = konumsayi + 1;
		inputFile.close();
	}	
	}
	Islem::~Islem(){                                             //Islem yikici fonksiyonu heap'te olusan liste nesnesini siliyor.
		delete liste;
	}


