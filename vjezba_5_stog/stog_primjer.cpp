#include "stog.h"

//konstuktor
stog::stog(void)
{
	koliko = 0;
	vrh = NULL;
}

//destruktor
stog::~stog(void)
{
	ocisti();
}

//vraca velicinu stoga
int stog::velicina() const
{
	return koliko;
}

//vraca ako je stog prazan
bool stog::prazan() const
{
	return koliko == 0;
}

//stavljanje na stog
void stog::push(tip_elementaT _podatak)
{
	cvor *novi = new cvor; //definiramo novi cvor
	novi->podatak = _podatak;
	novi->sljedeci = vrh; //novi gleda na prethodni
	vrh = novi; //novi cvor postaje novi vrh stoga
	koliko++; //povecamo brojac elemenata na stogu	
}
	
//uzimanje sa stoga
tip_elementaT stog::pop()
{
	if (!prazan())
	{
		tip_elementaT _podatak = vrh->podatak; //zapamtimo podatak na vrhu stoga
		cvor *c = vrh->sljedeci; //zapamtimo novi vrh
		delete vrh; //obrisemo stari vrh
		vrh = c; //postavimo novi vrh
		koliko--; //smanjimo brojac elemenata na stogu
		return _podatak; //vratimo podatak sa vrha
	}
	else
	{
		cout << "GRESKA: Stog je prazan!" << endl;
		return NULL;
	}
}

//vraca podatak sa vrha stoga bez brisanja vrha
tip_elementaT stog::top() 
{
	if (!prazan())
	{
		tip_elementaT _podatak = pop(); //uzmemo sa stoga
		push(_podatak); //vratimo natrag
		return _podatak;
	}
	else
		return NULL;
}

//cisti stog
void stog::ocisti() 
{
	while (vrh != NULL)
		tip_elementaT _podatak = pop(); //uzimamo sa stoga dok ima
}
