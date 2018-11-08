#ifndef PERRO_H
#define PERRO_H


class Perro : public Animal
{
    public:
        Perro(string a, int b) : Animal (a,b){};
        void raza(string);
        void habla();
        
        

};

#endif // PERRO_H
