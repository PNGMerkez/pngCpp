//@ykslkrkci taraf�ndan Persona Non Grata i�in haz�rlanm��t�r.
#include<iostream>
                                //De�i�kenler B�l�m 2 - De�i�ken Ezme :)
using namespace std;
                                //Farkl� etki alanlar�nda ayn� isimde de�i�kenler olu�turulabilir.
                                //En son tan�mlanan �ncekileri bast�r�yor.Yani sondaki tan�mlanan g�r�l�r.

int sayi1 = 5;                  //Global De�i�kenlerdir.Hi� bir etki alan�nda dahil de�ildir fakat heryerde g�r�n�rd�r. Porgram�n ba��ndan sona tan�ml�d�r.Haf�zadad�r.Olu�turuldu�unda 0 de�erini al�rlar.
const int le = 100;             //const int Sabit say�lard�r. de�i�tirilemez.Globaldeyken direk 0 de�eri al�yor, fakat globalde tan�mlanmad�yse De�erini mutlaka direk vermeliyiz vermezsek hata vericektir.


int main()
{	
	int sayi1 = 6;
	{
		
		int sayi1 = 7;
		cout<<sayi1<<endl;       //En son tan�mlanan 7 ekrana bast�r�ld�.
	
	}
	cout<<sayi1<<endl;           // Bu blokta son tan�mlanan 6 oldu�u i�in 6 bast�r�ld�.
	
	float a = 2.0f;              //f koyarsak float oldu�unu anl�yacakt�r.Koymazsak double olarak g�r�r.
	double d = 3.9999999999999; 
	int k = 5;
	short t = 10;
	
	t = d;                       //d nin de�eri t ye verildi fakat d double oldu�u i�in ve t tam say� oldu�undan sadec tam say� k�sm� t ye verildi.
	cout<<"\nT nin yeni degeri: "<<t<<endl;  
	
	int araba = 2147483647;      //�nt ta��yabilece�i max say� budur.
	cout<<araba + 1<<endl;       //�zerine 1 daha eklersem ta�ma olur ve say� - ye �evirilir.
	
	unsigned int l = araba + 1;  //unsigned int 0 dan 4 milyar k�s�re kadar de�er al�yor.
	cout<<l<<endl;               //Say�y� ba�ar�l� bir �ekilde bast�rd�.
	
	return 0;                    //Program� bitirmesini s�yl�yorum.	
}	

