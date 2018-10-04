#include "Calculadora.h"

Calculadora::Calculadora() {
	menu = new Menu();
}

void Calculadora::encender() {
	bool apagado = false;
	while(!apagado){
		menu->mostrarTitulos();
		int posicion = menu->leerPosicion();
		menu->getOpcion(posicion)->leerOperandos();
		menu->getOpcion(posicion)->mostrarResultado();
		apagado = true;
	}
}

Calculadora::~Calculadora() {
	delete menu;
}

