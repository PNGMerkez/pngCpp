//@ykslkrkci taraf�ndan Persona Non Grata i�in haz�rlanm��t�r.
#include<iostream>
//Ko�ullar Ders1
using namespace std;
int main()
{
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int sayi1,sayi2,sonuc,sonuc2;           //Farkl� �nteger de�i�kenler yaratt�m.
	
	cout<<"Birinci Sayi: ";  
	cin>>sayi1;                             //sayi1 de�i�keninin de�erini kullan�c�dan ald�m.
	cout<<endl<<"�kinci Sayi: ";
	cin>>sayi2;                             //sayi2 de�i�keninin de�erini kullan�c�dan ald�m.
	
	if(sayi1>sayi2)                         //E�er sayi1 sayi2 den b�y�k ise
	{
	
		cout<<"Sayi1 Daha Buyuk."<<endl;    //Ko�ula ba�l� ne yazd�rmas�n� istedi�imi s�yledim.
		cout<<"Merhaba Persona"<<endl;	    //�f'e ba�l� de�il say�1 sayi2 den k���k olsada bunu ekrana bast�r�cak peki nas�l bunu a�abiliriz?
	}                                       //S�sl� parantez ile blok i�ine almazsam if ko�ulunu Persona yaz�cakt� if den ba��ms�z. Ama blok haline sokarsak sadece if ko�ulu true olursa Persona yazd�r�cak.
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	sonuc = (sayi1>=0)&&(sayi2>=0);          //�kili ko�ulu bu halde yazabiliriz. &&-->Anlam� (VE DURUMU) yani solununda sa��n�nda true olmas�n� istiyoruz.E�er iksinden birisi false ise sonuc false olucakt�r.
	if(sonuc)
	{
		cout<<"�ki tarafta true oldu :)"<<endl;
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	sonuc2 = (sayi1>=0)||(sayi2>=0);         // || --> Veya anlam�na gelir.Ko�ullardan birisi sa�land���nda true de�erini al�r.�kiside sa�lanmazsa false de�erinia al�r.
	if(sonuc2)
	{
		cout<<"Ko�ullardan en az 1 tanesi true de�erini aldi."<<endl;
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if(-1)
	{
		cout<<"if i�indeki 0 dan farkl� t�m say�lar� true olarak g�r�yor."<<endl;  //Yani if blogunun i�erisine giriyor.
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if("Persona Non Grata")
	{
		cout<<"if i�indeki 0 dan farkl� tum say�lar� true olarak g�ruyor."<<endl;  //Yani if blogunun i�erisine giriyor.
	}
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int persona,non,grata;
	cout<<"�lk deger: ";
	cin>>persona;
	cout<<endl<<"�kinci Deger: ";
	cin>>non;
	
	grata = persona == non ;               //Birnevi bir ko�ul yaratm�� oldum.
	
	if (grata)                             //Grata de�i�keni true olursa if'in i�erisine giricek, grata false olursan ko�ula girmiyecek.
  //if(sayi1==sayi2)                         Bu halde de yazabilirdim.Yukar�daki ko�ulun ayn�s�.
  //if(sayi1!=saiy2)                         E�er sayi1 sayi2'ye e�it de�ilse...
	{
	cout<<"Persona Non'a e�ittir.";
	}	
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	return 0;
}

