#include "Consola.h"

Consola::Consola() {
}

Entero Consola::leerEntero(std::string mensaje) {
	Entero entrada;
	this->Escribir(mensaje);
	std:: cin >> entrada;
	return entrada;
}

Consola::~Consola() {
}
