/*
 * Cabecera objeto Fecha
 */
#ifndef FECHA_H
#define FECHA_H

#include "Dia.h"
#include "Mes.h"
#include "Age.h"

class Fecha{
    private:
        Dia * objDia;
        Mes * objMes;
        Age * objAge;

    public:
        Fecha(string nomDia, int numDia, string nomMes, int numMes, int numAge, int sigAge, bool leapAge);
        ~Fecha();

        //Dia
        string getNombreDay();
        int getNumeroDay();
        void setNombreDay(string nombreDay);
        void setNumeroDay(int numeroDay);

        //Mes
        string getNombreMonth();
        int getNumeroMonth();
        void setNombreMonth(string nombreMonth);
        void setNumeroMonth(int numeroMonth);

        //Age
        int getNumeroYear();
        int getSigloYear();
        bool getLeapYear();
        void setNumeroYear(int numeroYear);
        void setSigloYear(int sigloYear);
        void setLeapYear(bool leapYear);
};

#endif // FECHA_H
