#include <iostream>
#include <string>
#include <vector>
#include "Racunalo.h" //ukljucivanje klase

using namespace std;
vector<Racunalo> vec;
void upis();

int main()
{
	for (int x = 0; x < 2; x++) {
		upis();
	}
	system("cls");
	for (int x = 0; x < vec.size(); x++) {
		Racunalo R = (Racunalo)vec.at(x);
		cout << x << ". ";
		cout << R.Ispis() << endl;
	}

	Racunalo R; //naredba koja kreira objekt R
	R.setNaziv("Asus");
	R.setCijena(599.99);
	R.setRam(16);
	cout << R.Ispis();
	system("pause");
}

void upis() {
	Racunalo R;
	string podatak;
	cout << "Upisi naziv racunala: ";
	cin >> podatak;
	R.setNaziv(podatak);
	cout << "Upisi cijenu racunala";
	cin >> podatak;
	R.setCijena(stod(podatak));
	cout << "Upisi RAM: ";
	cin >> podatak;
	R.setRam(stoi(podatak));
	vec.push_back(R);
}

