#ifndef CONSOLA_H_
#define CONSOLA_H_

#include <string>
#include <iostream>
typedef int Entero;

class Consola {
public:
	Consola();
	Entero leerEntero(std::string mensaje);
	template <typename T>
	void Escribir(T mensaje);
	virtual ~Consola();
};

template<typename T>
void Consola::Escribir(T mensaje) {
	std::cout << mensaje << std::endl;
}

#endif
