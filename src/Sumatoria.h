#ifndef SUMATORIA_H_
#define SUMATORIA_H_

#include "Opcion.h"

class Sumatoria : public Opcion {
public:
	Sumatoria();
	virtual void ejecutar() override;
	virtual ~Sumatoria();
};

#endif
