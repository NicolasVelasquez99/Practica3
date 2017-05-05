#include "Fecha.h"

Fecha::Fecha(string nomDia, int numDia, string nomMes, int numMes, int numAge, int sigAge, bool leapAge){
    objDia = new Dia(nomDia, numDia);
    objMes = new Mes(nomMes, numMes);
    objAge = new Age(numAge, sigAge, leapAge);
}

Fecha::~Fecha(){
    delete objDia;
    delete objMes;
    delete objAge;
}
        //Dia
string Fecha::getNombreDay(){
    return objDia->getNombreDia();
}
int Fecha::getNumeroDay(){
    return objDia->getNumeroDia();
}

void Fecha::setNombreDay(string nombreD){
    objDia->setNombreDia(nombreD);
}

void Fecha::setNumeroDay(int numeroD){
    objDia->setNumeroDia(numeroD);
}
        //Mes
string Fecha::getNombreMonth(){
    return objMes->getNombreMes();
}

int Fecha::getNumeroMonth(){
    return objMes->getNumeroMes();
}

void Fecha::setNombreMonth(string nombreM){
    objMes->setNombreMes(nombreM);
}

void Fecha::setNumeroMonth(int numeroM){
    objMes->setNumeroMes(numeroM);
}
        //Age
int Fecha::getNumeroYear(){
    return objAge->getNumeroAge();
}

int Fecha::getSigloYear(){
    return objAge->getSigloAge();
}

bool Fecha::getLeapYear(){
    return objAge->getBisiesto();
}

void Fecha::setNumeroYear(int numeroA){
    objAge->setNumeroAge(numeroA);
}

void Fecha::setSigloYear(int sigloA){
    objAge->setSigloAge(sigloA);
}

void Fecha::setLeapYear(bool leap){
    objAge->setBisiesto(leap);
}

