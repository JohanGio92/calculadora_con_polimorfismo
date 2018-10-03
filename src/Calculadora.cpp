#include "Calculadora.h"

Calculadora::Calculadora() {
	menu = new Menu();
}

void Calculadora::encender() {
	bool apagado = false;
	while(!apagado){
		menu->mostrar();
	}
}

Calculadora::~Calculadora() {
	delete menu;
}

