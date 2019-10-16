#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Racunalo
{
private:		//private pozivamo funkcijom 
	string naziv;	//pozivamo s "get" i "set"
	double cijena;
	int ram;
public:
	Racunalo();
	~Racunalo();
	string getNaziv() const;
	double getCijena() const;
	int getRam() const;

	void setNaziv(string naziv);
	void setCijena(double cijena);
	void setRam(int ram);

	string Ispis() const;
};