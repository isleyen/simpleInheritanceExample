#pragma once
#include <iostream>

using namespace std;

class Hayvan {
public:
	Hayvan(string ad);
	void beslen();
	void uyu();
	void setIsim(string ad);
	string getIsim();
private:
	string isim;


};