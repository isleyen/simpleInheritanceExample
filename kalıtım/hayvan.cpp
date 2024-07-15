#include "Hayvan.h"

Hayvan::Hayvan(string ad) {
	Hayvan::isim = ad;
}

void Hayvan::beslen() {
	cout << Hayvan::isim << " Besleniyor..." << endl;
}

void Hayvan::uyu() {
	cout << Hayvan::isim << " Uyuyor..." << endl;
}

void Hayvan::setIsim(string ad) {
	Hayvan::isim = ad;
}

string Hayvan::getIsim() {
	return Hayvan::isim;
}

