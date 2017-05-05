/*
 * Archivo de cabecera clase Empleado Asistente
 */
 
 #ifndef EMPLEADOASISTENTE_H
 #define EMPLEADOASISTENTE_H
 
#include "Empleado.h"
#include <string>
using std::string; 
 /*
  *Definición clase EmpleadoAsistente
  */
  
class EmpleadoAsistente: public Empleado{

	//Los datos protegido sólo pueden ser vivos por esta clase y por los que heredan de ella
	protected:
		string numSeccion;
		string asocSindical;
	
	public:
		EmpleadoAsistente(string nombreIn, int edadIn, int salarioIn, string numSeccionIn, string asocSindicalIn);
		~EmpleadoAsistente();
		
		string getNumSeccion();
		string getAsocSindical();
		
		void setNumSeccion(string numSeccionIn);
		void setAsocSindical(string asocSindicalIn);
	 
};

#endif
