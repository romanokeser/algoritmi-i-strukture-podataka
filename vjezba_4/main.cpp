#include <iostream>
#include <string>
#include "p_lista.h"
using namespace std;


int main() {
	cvor* c = new cvor;
	cvor c1;
	cout << c-> sljedeci << ", " << c1.sljedeci << endl;

	if (c->sljedeci == NULL)
		cout << "da" << endl;
	else
		cout << "ne" << endl;


	p_lista *moja_lista = new p_lista;
	moja_lista->dodaj("ana");
	moja_lista->dodaj("marko");
	moja_lista->dodaj("ivana");
	moja_lista->dodaj("luka");

	//ispis
	moja_lista->ispis();

	system("pause");
	return 0;
}