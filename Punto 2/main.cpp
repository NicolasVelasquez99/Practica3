/*
 *Autor: Nicolas Velasquez
 *Archivo: EmpleadoOficina.cpp
 *Descripción: Clase que implementa objeto Empleado Oficina
 *Fecha: 04-05-2016
 *Fecha modificación: 05 de Mayo de 2016 
 */

#include <iostream>
#include <string>
#include "EmpleadoOperativo.h"
#include "EmpleadoOficina.h"
#include "EmpleadoEjecutivo.h"

using namespace std;

int main(/*int argc, char * argv[]*/){
	//se instancian algunos objetos de las diferentes clases de empleados
	EmpleadoEjecutivo * objEmpleadoEjecutivo1 = new EmpleadoEjecutivo("Juan", 30, 1000000, 100, 302);
	EmpleadoEjecutivo * objEmpleadoEjecutivo2 = new EmpleadoEjecutivo("Pedro", 60, 1500000, 200, 102);
	EmpleadoOficina * objEmpleadoOficina = new EmpleadoOficina("Alberta", 40, 10000, "2A", "SintraStark", "Pedro", "Contabilidad");
	EmpleadoOperativo * objEmpleadoOperativo = new EmpleadoOperativo("Carlos", 20, 50000, "4F", "SintraStark", "Aseo");
	//se obtiene informacion especifica de algunos objetos
	cout<< "El nombre de Empleado Ejecutivo 1 es: " <<objEmpleadoEjecutivo1->getNombre()<< endl;
	cout<< "El numero Oficina de Pedro es: " <<objEmpleadoEjecutivo2->getNumOficina() << endl;
	//se cambian algunos datos de esos objetos
	objEmpleadoEjecutivo2->setNumOficina(69);
	//se muestra la informacion que se cambio anteriormente
	cout<< "El nuevo numero Oficina de Pedro es: " <<objEmpleadoEjecutivo2->getNumOficina() << endl;
	cout<< "La funcion de Empleado Operativo es: "<<objEmpleadoOperativo->getDescripActividad() << endl;
	//se cambian algunos datos de esos objetos
	objEmpleadoOperativo->setDescripActividad("Supervisor");
	//se muestra la informacion que se cambio anteriormente
	cout<< "La nueva funcion de Empleado Operativo es: "<<objEmpleadoOperativo->getDescripActividad() << endl;
	cout<< "La asociacion Sindical de el Empleado Operativo es: " <<objEmpleadoOficina->getAsocSindical() << endl;
	
}
