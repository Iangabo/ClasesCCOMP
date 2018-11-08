#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

 class Animal {
    protected:
        string nombre;
        int nroPatas;
    public:
        Animal (string n, int p) : nombre(n), nroPatas(p) {};
        virtual void habla ()=0;
        void hacerHablar(){
        this->habla();
 }

};

#endif // ANIMAL_H
