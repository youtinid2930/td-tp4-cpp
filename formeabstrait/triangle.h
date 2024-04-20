#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "forme.h"


class Triangle : public Forme{
private:
    double base;
    double hauteur;
public:
    Triangle();
    Triangle(double,double);
    void description() const;
    double aire();
};

#endif // TRIANGLE_H
