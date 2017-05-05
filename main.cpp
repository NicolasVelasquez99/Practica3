/*
 * Autores: Andres Mosquera, Alexander Velasquez, Nicolas Velasquez
 * Archivo: Dia.cpp
 * Descripcion: Este archivo reune todas las clases y le da funcionalidad al programa
 * Fecha: 04 de Mayo de 2017
 * Modificacion: 04 de Mayo de 2017
 */

 #include <iostream>
 #include <string>
 #include "Fecha.h"

 using namespace std;

 int main(int argc, char * argv[]){

    Fecha * fechaIngresoU = new Fecha("Lunes", 05, "Febrero", 02, 2016, 02, true);
    Fecha * fechaHoy = new Fecha("Jueves", 04, "Mayo", 05, 2017, 02, false);
    Fecha * fechaFinalMundial = new Fecha ("Domingo", 11, "Julio", 07, 2010, 02, false);

    cout << "......// 3 consultas //......\n\n" << endl;
    cout << "El nombre del dia de ingreso a la universidad es: " << fechaIngresoU->getNombreDay() << endl;
    cout << "El numero de mes de la final del mundial 2010 es: " << fechaFinalMundial->getNumeroDay() << endl;
    cout << "Es bisiesto el año de fechaHoy: " << fechaHoy->getLeapYear() << endl;

    cout << "\n\n......// 2 cambios y consultas //......\n\n" << endl;
    fechaHoy->setNombreDay("Viernes");
    fechaIngresoU->setNumeroYear(2017);
    cout << "El nuevo nombre de diaHoy es: " << fechaHoy->getNombreDay() <<endl;
    cout << "El nuevo año de ingreso a la universidad es: " << fechaIngresoU->getNumeroYear() << endl;
 }
