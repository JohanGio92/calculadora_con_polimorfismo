#include "Calculadora.h"

Calculadora::Calculadora() {
	menu = new Menu();
	menu->agnadir(new Sumatoria());
	menu->agnadir(new Subtraccion());
	menu->agnadir(new Multiplicacion());
	menu->agnadir(new Division);
	menu->cerrar();
}

void Calculadora::encender() {
	while(!menu->terminado()){
		menu->mostrarTitulos();
		Entero posicion = menu->leerPosicion();
		menu->getOpcion(posicion)->ejecutar();
	}
}

Calculadora::~Calculadora() {
	delete menu;
}

