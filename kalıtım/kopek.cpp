#include "kopek.h"

Kopek::Kopek(string ad) : Hayvan(ad) {

}
void Kopek::havla() {
	cout << Kopek::getIsim() << " havliyor!" << endl;
}