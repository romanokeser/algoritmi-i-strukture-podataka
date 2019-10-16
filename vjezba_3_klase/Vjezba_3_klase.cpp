#include <iostream>
#include <string>
#include <vector>
#include "Racunalo.h" //ukljucivanje klase


using namespace std;
vector<Racunalo> vec;
void upis();

int main()
{
	for (int x = 0; x < 2; x++)
	{
		upis();
	}
	

	Racunalo R; //naredba koja kreira objekt R
	R.setNaziv("Asus");
	R.setCijena(599.99);
	R.setRam(16);
	cout << R.Ispis();

	/*double cijena;
	cout << "Upisite cijenu racunala: ";
	cin >> cijena;
	R.setCijena(cijena);
	vec.push_back();
	system("pause");

	string naziv;
	cout << "Upisite naziv racunala: ";
	cin >> naziv;
	R.setNaziv(naziv);
	vec.push_back();
	system("pause");

	int ram;
	cout << "Upisite RAM: ";
	cin >> ram;
	R.setRam(ram);
	vec.push_back();
	system("pause");*/

	void upis()
	{
		Racunalo M;
		system("cls"); //brisanje ekrana
		cout << "Upisi naziv: ";
		cin >> M.naziv;
		cout << "Upisi cijenu: ";
		cin >> M.cijena;
		cout << "Upisi RAM: ";
		cin >> M.ram;
		vec.push_back(M);
	}
}

