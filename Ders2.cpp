//@ykslkrkci taraf�ndan Persona Non Grata i�in haz�rlanm��t�r.
#include<iostream>
// De�i�ken Tipleri ve De�i�kenler
using namespace std;

int main()
{
	/*
	int                         Tamsay�
	float                       Ondal�kl� Say�lar
	double                      Ondal�kl� Say�lar
	char                        Bir tane karakter sakl�yan veri tipi
	bool                        Mant�ksal veri tipi
	short int
	long int
	long double
	*/
	int a = 32;
	float b = 3.52;
	double c = 4.546;
	char d = 'y';
	bool e = false;
	bool f = true;
	
	cout<<"a de�i�keninin de�eri: "<< a << endl;  //Ekrana De�i�kenleri Bast�rd�k.
	cout<<"b de�i�keninin de�eri: "<< b << endl;  //Ekrana De�i�kenleri Bast�rd�k.
	cout<<"c de�i�keninin de�eri: "<< c << endl;  //Ekrana De�i�kenleri Bast�rd�k.
	cout<<"d de�i�keninin de�eri: "<< d << endl;  //Ekrana De�i�kenleri Bast�rd�k.
	cout<<"e de�i�keninin de�eri: "<< e << endl;  //Ekrana De�i�kenleri Bast�rd�k.
	cout<<"f de�i�keninin de�eri: "<< f << endl;  //Ekrana De�i�kenleri Bast�rd�k.
	
	int x,y,z,toplam = 0;                         //4 adet integer de�i�kent tan�mlad�m.
	x = 12;                                       //De�i�kenlerin de�erlerini verdim.
	y = 4;                                        //De�i�kenlerin de�erlerini verdim.
	z = 6;                                        //De�i�kenlerin de�erlerini verdim.
	toplam = x + y + z;                           //De�i�kenlerin de�erlerini verdim.
	cout<<"Toplam: "<< toplam <<endl;             //Toplam de�i�kenini ekrana bast�rd�m.
	
	// �u halde de tan�ml�yabilirsiniz.
	
	int persona,grata;
	int sayi1;
	int Sayi1 = 4;
	int sayi3 = 5;
	int sayi2;
	
	sayi1 = 1;
	sayi2 = Sayi1 + 5;                             //B�y�k K���k harf dikkate almal�s�n�z. Sayi1 ile sayi1 ayn� de�i�kenler de�ildir.
	//sayi3 = sayi3 + 1;                           //De�erini bir art�rd�k
	//sayi3 += 1;                                  //�stteki yap�lanla birebir ayn� i�lemi yapmaktad�r.
	
	cout<<sayi3++<<endl;                           //Say�n�n ilk de�erini bast�rd�. Ard�ndan art�rmaya ba�l�yacak.
	cout<<sayi3<<endl;
	cout<<++sayi3<<endl;                           //Say�n�n art�r�lm�� hali ekrana bast�r�l�yor.Yani �ncelikle art�r�yor.
	
	
	return 0;
}
