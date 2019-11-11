#include <iostream>
using namespace std;

//tip podataka elementa stoga
typedef int tip_elementaT;

//element stoga
struct cvor
{	
	tip_elementaT podatak; //podatak na stogu
	struct cvor *sljedeci; //pokazivac na prethodni èvor
};

class stog
{
	cvor *vrh; //pokazivac na vrh stoga
	int koliko; //broj elemenata na stogu
public:
	//osnovne operacije
	int velicina() const; //vraca velicinu stoga
	bool prazan() const; //vraca true ako je stog prazan
	void push(tip_elementaT _podatak); //stavljenje na stog
	tip_elementaT pop(); //uzimanje sa stoga
	//izvedene operacije
	tip_elementaT top(); //vraca vrh stoga
	void ocisti(); //cisti stog
	//konstrutori i destruktor
	stog(void); 
	~stog(void);
//funkcije prijatelji - imaju pristup privatnim clanovima klase
friend void prikazi_stog(stog *_s); 
};