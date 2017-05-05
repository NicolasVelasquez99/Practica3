/*
 * Autores: Andres Mosquera, Alexander Velasquez, Nicolas Velasquez
 * Archivo: Mes.cpp
 * Descripcion: Este archivo define la clase Mes
 * Fecha: 04 de Mayo de 2017
 * Modificacion: 04 de Mayo de 2017
 */
#include "Mes.h"

Mes::Mes(string nombreM, int numeroM){
    nombreMes = nombreM;
    numeroMes = numeroM;
}

Mes::~Mes(){
}

string Mes::getNombreMes(){
    return nombreMes;
}

int Mes::getNumeroMes(){
    return numeroMes;
}

void Mes::setNombreMes(string nombreM){
    nombreMes = nombreM;
}

void Mes::setNumeroMes(int numeroM){
    numeroMes = numeroM;
}
