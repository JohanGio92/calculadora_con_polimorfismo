#include "Calculadora.h"

Calculadora::Calculadora() {
	menu = new Menu();
}

void Calculadora::encender() {
	bool apagado = false;
	while(!apagado){
		menu->mostrar();
		menu->getOpcion()->readOperandos();
		menu->getOpcion()->ejecutar();
		apagado = true;
	}
}

Calculadora::~Calculadora() {
	delete menu;
}

