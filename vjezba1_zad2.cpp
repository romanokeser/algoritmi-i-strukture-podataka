/*
ZADATAK: struktura mobitel
	-naziv (string)
	-cijena (float)
	-zaslon	(float)
Treba napraviti: 
		 1. upis
		 2. ispis
		 3. ispisNAJSKUPLJI
		 4. tražicijena(od do)
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct mobitel
{
	string ime;
	float cijena;
	float zaslon;
};

vector <mobitel> vec;

void upis();
void ispis();
void ispisNAJSKUPLJI();
void traziCijenu(float min, float max);


int main()
{
	for (int i = 0; i < 3; i++)
	{
		upis();
	}
	ispis();

	cout << endl;
	cout << "Najskuplji mobitel je: " << endl;
	ispisNAJSKUPLJI();

	float min;
	float max;
	cout << endl << endl;
	cout << "Upisite minimalnu cijenu mobitela: ";
	cin >> min;
	cout << "Upisite maksimalnu cijenu mobitela: ";
	cin >> max;
	cout << endl;
	traziCijenu(min, max);

	system("pause");
}

void upis()
{
	mobitel M;
	system("cls"); //brisanje ekrana
	cout << "Upisi naziv mobitela: ";
	cin >> M.ime;
	cout << "Upisi cijenu mobitela: ";
	cin >> M.cijena;
	cout << "Upisi velicinu dijagonale zaslona: ";
	cin >> M.zaslon;
	vec.push_back(M);
}

void ispis()
{
	system("cls"); //brisanje ekrana
	int br = 1;
	for (int i = 0; i < vec.size(); i++)
	{
		mobitel A = (mobitel)vec.at(i);
		cout << br << "." << endl;
		cout << "Marka: " << A.ime << endl;
		cout << "Cijena: " << A.cijena << " kn" << endl;
		cout << "Zaslon: " << A.zaslon << " cm" << endl;
		cout << endl << endl;
		br++;
	}
}

void ispisNAJSKUPLJI()
{
	int najskuplji = 0;
	float cijena = 0.00;
	for (int i = 0; i < vec.size(); i++)
	{
		mobitel A = (mobitel)vec.at(i);
		if (A.cijena > cijena)
		{
			najskuplji = i;
			cijena = A.cijena;
		}
	}
	mobitel A = (mobitel)vec.at(najskuplji);
	cout << "Marka: " << A.ime << endl;
	cout << "Cijena: " << A.cijena << " kn" << endl;
	cout << "Zaslon: " << A.zaslon << " cm" << endl;
	cout << endl << endl;
}

void traziCijenu(float min, float max)
{
	int br = 1;
	cout << "Mobiteli u trazenom rangu cijena: " << endl << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		mobitel A = (mobitel)vec.at(i);
		if (A.cijena > min && A.cijena < max)
		{
			cout << br << "." << endl;
			cout << "Marka: " << A.ime << endl;
			cout << "Cijena: " << A.cijena << " kn" << endl;
			cout << "Zaslon: " << A.zaslon << " cm" << endl;
			cout << endl << endl;
			br++;
		}
	}
}