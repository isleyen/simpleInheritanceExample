#include <iostream>
#include "hayvan.h"
#include "kedi.h"
#include "kopek.h"
#include "kus.h"
using namespace std;

int main() {

	Kedi tekir("Tekir");
	tekir.beslen();
	tekir.uyu();
	tekir.fareYakala();

	cout << endl;
	
	Kopek karabas("Karabas");
	karabas.beslen();
	karabas.uyu();
	karabas.havla();

	cout << endl;

	Kus limon("Limon");
	limon.beslen();
	limon.uyu();
	limon.uc();

	cout << endl;


	return 0;
}