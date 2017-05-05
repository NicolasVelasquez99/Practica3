/*
 * Autores: Andres Mosquera, Alexander Velasquez, Nicolas Velasquez
 * Archivo: Age.cpp
 * Descripcion: Este archivo define la clase Age
 * Fecha: 04 de Mayo de 2017
 * Modificacion: 04 de Mayo de 2017
 */
#include "Age.h"

Age::Age(int numeroA, int sigloA, bool leap){
    numeroAge = numeroA;
    sigloAge = sigloA;
    bisiesto = leap;
}

Age::~Age(){
}

int Age::getNumeroAge(){
    return numeroAge;
}

int Age::getSigloAge(){
    return sigloAge;
}

bool Age::getBisiesto(){
    return bisiesto;
}

void Age::setNumeroAge(int numeroA){
    numeroAge = numeroA;
}

void Age::setSigloAge(int sigloA){
    sigloAge = sigloA;
}

void Age::setBisiesto(bool leap){
    bisiesto = leap;
}
