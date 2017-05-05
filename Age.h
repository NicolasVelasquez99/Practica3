/*
 * Cabecera objeto Age
 */
#ifndef AGE_H
#define AGE_H

class Age{
    private:
        int numeroAge;
        int sigloAge;
        bool bisiesto;

    public:
        Age(int numeroA, int sigloA, bool leap);
        ~Age();

        int getNumeroAge();
        int getSigloAge();
        bool getBisiesto();

        void setNumeroAge(int numeroA);
        void setSigloAge(int sigloA);
        void setBisiesto(bool leap);
};
#endif
