#include "stdafx.h"
#include "Anillo.h"
#include <stdlib.h>
#include <time.h>


Anillo::Anillo(){
	this->cantidad = rand() % 10 + 5;
	this->valor = rand() % 100 + 1;
	this->peso = rand() % 200 + 100;
}


Anillo::~Anillo()
{
}
