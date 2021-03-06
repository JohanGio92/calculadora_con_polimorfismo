#ifndef CONSOLA_H_
#define CONSOLA_H_

#include <string>
#include <iostream>
#include <sstream>
typedef int Entero;

class Consola {
public:
	Consola();
	Entero leerEntero(std::string mensaje);
	template <typename T>
	void Escribir(T mensaje);
	template <typename T>
	std::string toString(const T &value);
	virtual ~Consola();
};

template<typename T>
void Consola::Escribir(T mensaje) {
	std::cout << mensaje << std::endl;
}

template<typename T>
std::string Consola::toString(const T &value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

#endif
