/*
 *Autor: Nicolas Velasquez
 *Archivo: EmpleadoEjecutivo.cpp
 *Descripción: Clase que implementa objeto Empleado
 *Fecha: 04-05-2016
 *Fecha modificación: 05 de Mayo de 2016 
 */
#include "EmpleadoEjecutivo.h"

EmpleadoEjecutivo::EmpleadoEjecutivo(string nombreIn, int edadIn, int salarioIn, int numEmpleIn, int numOficinaIn):Empleado(nombreIn, edadIn, salarioIn){
	
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
	numEmple = numEmpleIn;
	numOficina = numOficinaIn;
}

EmpleadoEjecutivo::~EmpleadoEjecutivo(){
	
}

int EmpleadoEjecutivo::getNumEmple(){
	return numEmple;
}

int EmpleadoEjecutivo::getNumOficina(){
	return numOficina;
}

void EmpleadoEjecutivo::setNumEmple(int numEmpleIn){
	numEmple = numEmpleIn;
}

void EmpleadoEjecutivo::setNumOficina(int numOficinaIn){
	numOficina = numOficinaIn;
}
