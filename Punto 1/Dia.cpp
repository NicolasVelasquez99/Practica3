/*
 * Autores: Andres Mosquera, Alexander Velasquez, Nicolas Velasquez
 * Archivo: Dia.cpp
 * Descripcion: Este archivo define la clase Dia
 * Fecha: 04 de Mayo de 2017
 * Modificacion: 04 de Mayo de 2017
 */

#include "Dia.h"

Dia::Dia(string nombreD, int numeroD){
    nombreDia = nombreD;
    numeroDia = numeroD;
}

Dia::~Dia(){
}

string Dia::getNombreDia(){
    return nombreDia;
}

int Dia::getNumeroDia(){
    return numeroDia;
}

void Dia::setNombreDia(string nombreD){
    nombreDia = nombreD;
}

void Dia::setNumeroDia(int numeroD){
    numeroDia = numeroD;
}
