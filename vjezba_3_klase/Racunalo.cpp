#include "Racunalo.h"

Racunalo::Racunalo()
{
}

Racunalo::~Racunalo()
{
}

string Racunalo::getNaziv() const
{
	return naziv;
}

double Racunalo::getCijena() const
{
	return cijena;
}
int Racunalo::getRam() const
{
	return ram;
}

void Racunalo::setNaziv(string _naziv)
{
	naziv = _naziv;
}

void Racunalo::setCijena(double _cijena)
{
	cijena = _cijena;
}

void Racunalo::setRam(int _ram)
{
	ram = _ram;
}

string Racunalo::Ispis() const
{
	stringstream ss;
	ss << "Podaci o racunalu:\n" << endl <<
		"Naziv: " << getNaziv() << endl <<
		"Cijena: " << getCijena() << endl <<
		"Ram: " << getRam() << endl;
	return ss.str();
}