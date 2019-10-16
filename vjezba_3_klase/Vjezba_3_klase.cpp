#include <iostream>
#include <string>
#include <vector>
#include "Racunalo.h" //ukljucivanje klase

using namespace std;
vector<Racunalo> vec;
void upis();
void ispis();
Racunalo odrediNajskupljeRacunalo();
Racunalo traziRacunaloPoNazivu(string naziv);
void brisiRacunaloPoNazivu(string naziv);
void racunalaOdDo(double cijenaOd, double cijenaDo);
double prosjecnaCijenaRacunala();
Racunalo najjeftinijeRacunalo();

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
		cout << "////////////////////////////////////////////////////////////////////////////////////" << endl;
	}


}

void upis() {
	Racunalo R;
	string podatak;
	cout << "Upisi naziv racunala: ";
	cin >> podatak;
	R.setNaziv(podatak);
	cout << "Upisi cijenu racunala: ";
	cin >> podatak;
	R.setCijena(stod(podatak));
	cout << "Upisi RAM: ";
	cin >> podatak;
	cout << endl;
	R.setRam(stoi(podatak));
	vec.push_back(R);
}


void ispis() {
	system("cls");
	int br = 1;
	for (int x = 0; x < vec.size(); x++) {
		Racunalo R = (Racunalo)vec.at(x);
		cout << br << ". " << "\n";
		cout << R.Ispis();
		br++;
	}
}

