//
// Created by Miguel on 9/11/2023.
//

#ifndef PARCIAL2_POO3_ORNITORRINCO_H
#define PARCIAL2_POO3_ORNITORRINCO_H

#include "Anfibio.h"
#include "Mamifero.h"
#include "Oviparo.h"
#include "Venenoso.h"
#include <iostream>

class Ornitorrinco: public Anfibio, public Mamifero, public Oviparo, public Venenoso {
protected:
    int huevos;

public:
    Ornitorrinco() {
        huevos = 1;
    }

    ~Ornitorrinco() {
        std::cout << "Ornitorrinco eliminado" << std::endl;
    }

    void amamantar() override;
    void respirarBranquial() override;
    void respirarPulmonar() override;
    int ponerHuevos() override;
    void envenenar() override;

};


#endif //PARCIAL2_POO3_ORNITORRINCO_H
