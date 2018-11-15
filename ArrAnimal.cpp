#include "ArrAnimal.h"
#include <iostream>
#include "Animal.h"

using namespace std;

ArrAnimal::ArrAnimal()
{
    this->size=0;
    this->animales=new Animal[size];
}

ArrAnimal::ArrAnimal(const Animal ptr[], const int size)
{
    this->size=size;
    this->animales=new Animal[size];
    for(int i=0; i<size ; i++){
        animals[i]=ptr[i];
    }
}

ArrAnimal::ArrAnimal(ArrAnimal &a)
{
    this->size=a.size;
    this->animales=new Animal[a.size];
    for(int i=0; i<size ; i++){
        animales[i]=a.animals[i];
    }
}

void ArrAnimal::habla()
{
    for(int i=0; i<size ; i++){
        animales[i].habla();
    }
}

int ArrAnimal::getSize()
{
    return size;
}

void ArrAnimal::resize(int newSize)
{
    Animal *ptr = new Animal[newSize];
    int minsize = (newSize > size) ? size : newSize;
    for(int i=0; i<minsize ; i++)
        pts[i] = animales[i];

    delete[] animales;

    size = newSize;
    animales = ptr;

}

void ArrAnimaly::insert(const int pos, const Animal &a)
{
    resize(size+1);
    for(int i= size-1; i>pos ; i--){
        animales[i]=animales[i-1];
    }
    animales[pos]=a;

}

void ArrAnimal::push_back(const Animal &a)
{
    resize(size+1);
    animales[size-1]=a;
}

void ArrAnimal::remove(const int pos)
{
    for(int i=pos; i<size-1 ; i++)
        animales[i]=animales[i+1];
    resize(size-1);
}

void ArrAnimal::clear()
{
    resize(0);
}

ArrAnimal::~ArrAnimal()
{
    delete[] animales;
}
