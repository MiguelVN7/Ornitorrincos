//
// Created by Miguel on 9/11/2023.
//

#include "Ornitorrinco.h"
#include <iostream>


void Ornitorrinco::amamantar() {
    std::cout << "Amamantando ando Armando..." << std::endl;
}

void Ornitorrinco::respirarBranquial() {
    std::cout << "Respirando branquialmente..." << std::endl;
}

void Ornitorrinco::respirarPulmonar(){
    std::cout << "Respirando pulmonarmente..." << std::endl;
}

void Ornitorrinco::envenenar(){
    std::cout << "Envenenando ando Armando" << std::endl;
}

int Ornitorrinco::ponerHuevos() {
    huevos = huevos + 1;
    return huevos;
}

