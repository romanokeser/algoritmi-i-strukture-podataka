#pragma once
#include <iostream>
#include <fstream>
using namespace std;

//element liste
struct cvor
{
	string podatak;
	cvor *sljedeci;
};

class lista
{
private:
	cvor* glava;
public:
	void dodaj(string podatak); //dodaj na kraj liste
	void dodaj(string podatak, int indeks); //dodaj na neko mjesto
	void brisi(int indeks); //brisi neki element
	string vrati(int indeks) const;
	int velicina() const;
	void ocisti();
	lista(void);
	~lista(void);

	void ucitaj_test();
	void ispisi() const;
};

