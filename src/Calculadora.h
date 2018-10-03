#ifndef CALCULADORA_H_
#define CALCULADORA_H_

#include "Menu.h"

class Calculadora {
private:
	Menu* menu;
public:
	Calculadora();
	void encender();
	virtual ~Calculadora();
};

#endif
