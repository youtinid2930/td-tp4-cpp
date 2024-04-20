#include <iostream>
#include "forme.h"
#include "cercle.h"

using namespace std;

int main()
{
    Forme f;
    Cercle c;
    f.description();
    c.description();
    Forme f2(c); f2.description();
    affichageDesc(f);
    affichageDesc(c);

    return 0;
}
