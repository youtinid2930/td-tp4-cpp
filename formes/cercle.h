#ifndef CERCLE_H
#define CERCLE_H
#include "forme.h"

class Cercle : public Forme {
public:
    void description() {
        std::cout << "Ceci est un cercle !" << std::endl;
   }

};
#endif // CERCLE_H

void affichageDesc(Forme& f) {
        f.description();
}
