#ifndef GATO_H
#define GATO_H


class Gato : public Animal
{
    public:
        Gato(string p, int q):Animal (p,q){};
        void unias(string);
        void habla();
};

#endif // GATO_H
