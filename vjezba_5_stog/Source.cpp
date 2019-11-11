#include <iostream>
#include <string>
#include "stog.h"
using namespace std;

int main() {
	cout << "Kreairamo stog." << endl;
	stog s;
	prikazi_stog(&s); //prikazimo prazan stog
	//punimo i praznimo stog
	pisi_stog(&s, 10);
	pisi_stog(&s, 15);
	pisi_stog(&s, 77);
	pisi_stog(&s, 3);
	citaj_stog(&s);
	citaj_stog(&s);
	pisi_stog(&s, 99);
	citaj_stog(&s);
	citaj_stog(&s);
	citaj_stog(&s);
	citaj_stog(&s);
	pisi_stog(&s, 77);
	pisi_stog(&s, 15);
	cout << "Ocistimo stog..." << endl;
	s.ocisti();
	prikazi_stog(&s);
	pisi_stog(&s, 3);
	cout << "Na vrhu stoga(top) " << s.top() << endl;
	prikazi_stog(&s);

	system("pause");
	return 0;
}