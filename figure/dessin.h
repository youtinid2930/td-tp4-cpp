#ifndef DESSIN_H
#define DESSIN_H
#include "figure.h"
#include <vector>
#include "cercle.h"
#include "caree.h"
#include "triangle.h"


class Dessin {
private:
  std::vector<Figure*> figures;
public:
  Dessin() {}

  ~Dessin() {
    std::cout << "distructeur de dessin. "<<std::endl;
    for (size_t i = 0; i < figures.size(); ++i) {
      delete figures[i];
    }
  }

  void ajouteFigure(Figure const& figure) {
    figures.push_back(figure.copie());
  }

  void affiche() const {
    for (size_t i = 0; i < figures.size(); i++) {
      figures[i]->affiche();
    }
  }
};
#endif // DESSIN_H
