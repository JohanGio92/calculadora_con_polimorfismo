#include "Opcion.h"

Opcion::Opcion(std::string titulo) :
		titulo(titulo), unNumero(0), otroNumero(0) {
}

Opcion::Opcion() : Opcion("") {
}

void Opcion::readOperandos() {
	Consola consola;
	unNumero =  consola.leerEntero("Por favor Ingresa un Numero: ");
	otroNumero = consola.leerEntero("Por favor ingresa otro numero: ");
}

void Opcion::mostrar(int posicion) {
	Consola consola;
	consola.Escribir(consola.toString(posicion) + titulo);
}

Opcion::~Opcion() {
}



