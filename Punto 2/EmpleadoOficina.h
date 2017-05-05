/*
 * Archivo de cabecera clase Empleado Oficina
 */
 
 #ifndef EMPLEADOOFICINA_H
 #define EMPLEADOFICINA_H


#include "EmpleadoAsistente.h"
#include <string>
using std::string; 
 /*
  *Definición clase EmpleadoOficina
  */
  
class EmpleadoOficina: public EmpleadoAsistente{

	//Los datos protegido sólo pueden ser vivos por esta clase y por los que heredan de ella
	protected:
		string nomJefe;
		string descripLabores;
	
	public:
		EmpleadoOficina(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asocSindicalIn, string nomJefeIn,  string descripLaboresIn);
		~EmpleadoOficina();
		
		string getNomJefe();
		string getDescripLabores();
		
		void setNomJefe(string nomJefeIn);
		void setDescripLabores(string descripLaboresIn);
	 
};

#endif
