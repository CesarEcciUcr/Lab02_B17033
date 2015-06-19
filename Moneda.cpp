#include "stdafx.h"
#include "Moneda.h"


Moneda::Moneda()
{
	this->cantidad = rand() % 10 + 5;
	this->valor = rand() % 100 + 1;
	this->peso = rand() % 200 + 100;
}


Moneda::~Moneda()
{
}
