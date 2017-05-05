/*
 *Autor: Nicolas Velasquez
 *Archivo: EmpleadoOficina.cpp
 *Descripción: Clase que implementa objeto Empleado Operativo
 *Fecha: 04-05-2016
 *Fecha modificación: 05 de Mayo de 2016 
 */
 
#include "EmpleadoOperativo.h"

EmpleadoOperativo::EmpleadoOperativo(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asocSindicalIn, string descripActividadIn):EmpleadoAsistente(nombreIn, edadIn, salarioIn, numSeccionIn, asocSindicalIn){
	
	descripActividad = descripActividadIn;
	
}

EmpleadoOperativo::~EmpleadoOperativo(){
	
}

string EmpleadoOperativo::getDescripActividad(){
	return descripActividad;
}

void EmpleadoOperativo::setDescripActividad(string descripActividadIn){
	descripActividad = descripActividadIn;
}
