#include "p_lista.h"
//implementacija klase
p_lista::p_lista() 
{
	glava = rep = NULL;
}

p_lista::~p_lista()
{

}

void p_lista::dodaj(tip_cvora _podatak)		//metoda dodaj
{
	//int* i = new int(34);
	//int i1 = 34; //staticki

	cvor *novi = new cvor();	//dinamicka metoda, radi se sa zvijezdicom
	novi->podatak = _podatak;
	novi->sljedeci = NULL;

	if (glava == NULL) //ako je prvi cvor
	{
		glava = rep = novi;
	}
	else 
	{
		rep->sljedeci = novi;
		rep = novi;
	}

}

void p_lista::ispis() const //ne stavimo li "const", "ispis" ce se podcrtati
{
	cvor* c = glava;
	while (c != NULL)
	{
		cout << c->podatak << " ";
		c = c->sljedeci;
	}
	cout << endl;
}