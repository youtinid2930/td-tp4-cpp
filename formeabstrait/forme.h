#ifndef FORME_H
#define FORME_H
#include<iostream>


class Forme {
public:
    virtual void description() const{
        std::cout << "Ceci est une forme !" << std::endl;
    }
    virtual double aire() {
        return 0.0;
    }
};


#endif // FORME_H
