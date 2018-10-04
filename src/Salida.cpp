#include "Salida.h"

Salida::Salida() : Opcion("- Salir"), salida(false){
}

void Salida::ejecutar(){
	salida = true;
}

bool Salida::cerrar(){
	return salida;
}

Salida::~Salida() {
}

