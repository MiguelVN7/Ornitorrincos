#include <iostream>
#include "Ornitorrinco.h"

int main() {
    Ornitorrinco* perry = new Ornitorrinco();
    perry -> amamantar();
    perry -> respirarBranquial();
    perry -> respirarPulmonar();
    perry -> envenenar();
    std::cout << "He puesto: " << perry -> ponerHuevos() << " huevitos..." << std::endl;
    std::cout << "He puesto: " << perry -> ponerHuevos() << " huevitos..." << std::endl;

    return 0;
}
