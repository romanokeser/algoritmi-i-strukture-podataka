UPIS/ISPIS STUDENATA, ISPIS STUDENATA S 2. GODINE

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct student
{
	string ime;
	string grad;
	int god_studija;
};

vector <student> vec;

void upis();
void ispis();
void ispisGodina(int godina);

int main()
{
	for (int x = 0; x < 2; x++)
		upis();
	ispis();
	ispisGodina(2);
	system("pause");
}

void upis() { //upis studenata
	student S;
	system("cls");
	cout << "upisi naziv studenta: ";
	cin >> S.ime;
	cout << "Upisi grad: ";
	cin >> S.grad;
	cout << "Upisi godinu studija: ";
	cin >> S.god_studija;
	vec.push_back(S);

}

void ispis() {
	system("cls");
	int br = 1;
	for (int x = 0; x < vec.size(); x++) {
		student A = (student)vec.at(x);
		cout << br << ". \nStudent: " << A.ime << endl;
		cout << "Grad: " << A.grad << endl;
		cout << "Godina studija: " << A.god_studija << endl;
		cout << endl << endl;
		br++;
	}
}

void ispisGodina(int godina) {
	system("cls");
	int br = 1;
	for (int x = 0; x < vec.size(); x++) {
		student A = (student)vec.at(x);
		if (A.god_studija != godina)
			continue;
		cout << br << ". \nStudent: " << A.ime << endl;
		cout << "Grad: " << A.grad << endl;
		cout << "Godina studija: " << A.god_studija << endl;
		cout << endl << endl;
		br++;
	}
}
