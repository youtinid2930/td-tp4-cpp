#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>




class Figure {
public:
    Figure() {
        std::cout << "Ceci est un figure ."<<std::endl;
    }
    Figure(const Figure &f) {std::cout << "constructeur par copie de figures";}

    virtual void affiche() const = 0;
    virtual Figure* copie() const = 0;
};
#endif // FIGURE_H
