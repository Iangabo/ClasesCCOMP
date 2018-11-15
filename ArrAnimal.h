#ifndef ARRANIMAL_H
#define ARRANIMAL_H
#include "Animal.h"

#include <iostream>

using namespace std;

class ArrAnimal
{
    public:
        ArrAnimal();
        ArrAnimal(const Animal ptr[], const int size);
        ArrAnimal(animalArray &a);
        ~ArrAnimal();

        void habla();
        int getSize();
        void push_back(const Animal &a);
        void insert(const int , const Animal &a);
        void remove(const int);
        void clear();

    private:
        int size;
        Animal *animales;
        void resize(int resize);
};

#endif // ARRANIMAL_H
