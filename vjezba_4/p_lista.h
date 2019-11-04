#pragma once
#include <iostream>
#include <string>
using namespace std;

typedef string tip_cvora; //tip cvora,

struct cvor
{
	tip_cvora podatak; //typedef govori koji je ovo tip podatka
	cvor* sljedeci; //pokazivac na taj tip u memoriji
};

//deklaracija klase (razreda)
class p_lista
{
private:
	cvor* glava;
	cvor* rep;
public:
	p_lista();
	~p_lista();
	void dodaj(tip_cvora _podatak);
	void ispis() const; //const-ta metoda ne moze mijenjati objekt, vrsta zastite objekta, radi i bez const
};
