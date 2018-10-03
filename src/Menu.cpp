#include "Menu.h"

const int Menu::LONGITUD = 4;

Menu::Menu() {
	this->opciones = new Opcion*[LONGITUD];
	opciones[1] = this->getSumatoria();
	opciones[2] = this->getSubtraccion();
	opciones[3] = this->getMultiplicacion();
	opciones[4] = this->getDivision();
}

Sumatoria* Menu::getSumatoria(){
	return new Sumatoria();
}

Subtraccion* Menu::getSubtraccion() {
	return new Subtraccion();
}

Multiplicacion* Menu::getMultiplicacion() {
	return new Multiplicacion();
}

Division* Menu::getDivision() {
	return new Division();
}

void Menu::mostrar() {
	for (int i = 0; i < LONGITUD; ++i) {
		opciones[i]->mostrar(i + 1);
	}
}

Menu::~Menu() {
}

