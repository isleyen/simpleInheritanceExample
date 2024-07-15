#include "kedi.h"

Kedi::Kedi(string ad) : Hayvan(ad) {

}

void Kedi::fareYakala() {
	cout << Kedi::getIsim() << " fare yakaliyor!" << endl;
}