#include<iostream>
// Ko�ullar 2
using namespace std;

int main()
{
int sayi1,sayi2,sonuc;

cout<<"Birinci Sayi: ";  
cin>>sayi1;                
cout<<endl<<"Ikinci Sayi: ";
cin>>sayi2;

if (sayi1<sayi2)
{
	cout<<"Sayi2 Buyuk."<<endl;
}
else                         //De�ilse diyerek ard�ndan yapmas�n� istedi�im i�lemleri blok a�arak i�ine yazd�m.
{
	cout<<"Sayi1 Buyuk."<<endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

//Ko�ul Daraltma  --- S�ra s�ra t�m ko�ullar� gezerek hangisinin uygun oldu�unu ar�yor.


int sayi3;

cout<<"Sayiyi Giriniz: ";         
cin>>sayi3;                         //Kullan�c�dan say� ald�m.

if (sayi3==80)                      //E�er 80e e�itse dedim.
{
	cout<<"80e esit.";
}
else if (sayi3==70)                 //e�er 70e e�itse dedim.
{
	cout<<"70e esit..";
}
else if (sayi3==60)                 //e�er 60a e�itse dedim.
{
	cout<<"60a esit.";
}
else                                //Hi� biri de�ilse :) k�sacas� �f ile Else aras�na istedi�imiz kadar else if kullanarak ko�ullar�m�z� daraltabiliyoruz.
{
	cout<<"B�yle bir sayi olamaz. ";
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Ko�ul Operat�r� (�ok fazla kar��n�za ��kmayacak)

//switch else if'in bir kar��l���d�r. Fakat t�m ko�ullar� gezmez, direk kendisine uygun olan ko�ula gider.

int a = 5;
switch(a)
{
	case 1:
		cout<<"Bir";
		break;              //break Switch i�erisinden ��kmam�z� sa�l�yor.
	case 2:
		cout<<"�ki";
		break;              //break Switch i�erisinden ��kmam�z� sa�l�yor.
	case 4:
		cout<<"D�rt";	
		break;              //break Switch i�erisinden ��kmam�z� sa�l�yor.
	case 5:
		cout<<"Bes"<<endl;	
		break;              //break Switch i�erisinden ��kmam�z� sa�l�yor.
	default:                //else g�revi g�rmektedir.
		cout<<"Hicbirisi";	
}
	cout<<"Sona geldinn :)";
////////////////////////////////////////////////////////////////////////////////////////
	int sayi67;
	
	cout<<"Sayiyi Giriniz :";
	cin>>sayi67;
	cout<<((sayi67>=0)?"Pozitif":"Negatif"); //?'nin buradaki i�levi, belirtti�im ko�ul sa�land���nda ekrana Pozitif yaz�cak de�ilse Negatif yazd�r�cak.

	return 0;				
}
