#include "lista.h"
lista::lista(void)
{
	glava = NULL;
}

lista::~lista(void)
{
	ocisti();
}

void lista::dodaj(string podatak)
{
	//novi cvor
	cvor* novi = new cvor;
	novi->podatak = podatak;
	novi->sljedeci = NULL;
	if (glava == NULL) //ako je lista prazna
		glava = novi;
	else //ako nije prazna lista
	{
		cvor* c = glava; //trenutni cvor s kojim radimo
		//idemo na kraj liste
		while (c->sljedeci != NULL)
			c = c->sljedeci;
		//dodajemo novi cvor na kraj liste
		c->sljedeci = novi;
	}
}

void lista::dodaj(string podatak, int indeks)
{
	cvor* c = glava; //trenutni cvor
	//novi cvor 
	cvor* novi = new cvor;
	novi->podatak = podatak;
	if (indeks == 0)//ako je indeks 0
	{
		if (c == NULL) //ako je lista prazna
			novi->sljedeci = NULL;
		else
			novi->sljedeci = c;
		glava = novi;
	}
	else //ako nije indeks 0
	{
		//idemo do n-tog clana liste
		for (int i = 1; i < indeks; i++)
		{
			c = c->sljedeci;
			if (c == NULL)
			{
				cout << "Krivi indeks!" << endl;
				return;
			}
		}
		//dodajemo novi
		novi->sljedeci = c->sljedeci;
		c->sljedeci = novi;
	}
}

void lista::brisi(int indeks)
{
	cvor* p = NULL; //prethodni cvor
	int i = 0; //brojac
	//prekidamo for ako dodemo do trazenog indeksa ili do kraja liste
	for (cvor* c = glava; c != NULL && i <= indeks; c = c->sljedeci)
	{
		if (i == indeks) //kada dodemo do zeljenog elementa
		{
			if (p == NULL) //ako brisemo 0 element
			{
				if (c != NULL)//ako postoji glava
					glava = c->sljedeci;
			}
			else //ako ne brisemo 0 element
				p->sljedeci = c->sljedeci;
			delete c;
		}
		p = c; //pamtimo prethodni
		i++;
	}
}

void lista::ocisti()
{
	//brisemo glavu dok ne dodemo do kraja liste
	while (glava !=NULL)
	{
		cvor* c = glava->sljedeci;
		delete glava;
		glava = c;
	}
}

int lista::velicina() const
{
	int brojac = 0;
	for (cvor* c = glava; c != NULL; c = c->sljedeci)
		brojac++;
	return brojac;
}

string lista::vrati(int index) const
{
	int i = 0;
	cvor* c = glava;
	while (i < index && c != NULL)
	{
		i++;
		c = c->sljedeci;
	}
	return c->podatak;
}