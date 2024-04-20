#ifndef CERCLE_H
#define CERCLE_H
#include "forme.h"


class Cercle : public Forme {
    double r;
public:
    Cercle();
    Cercle(double);
    void description() const;
    double aire();
};

#endif // CERCLE_H
