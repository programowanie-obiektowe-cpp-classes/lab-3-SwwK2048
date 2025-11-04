#pragma once

#include "include/Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int juz_przetransportowano = 0;
    unsigned int zaglowce = 0;

    if (towar == 0) return zaglowce;

    Stocznia stocznia{};

    while(juz_przetransportowano < towar)
    {
        Statek* s = stocznia();
        juz_przetransportowano += s -> transportuj();

        if (dynamic_cast<Zaglowiec*>(s)) zaglowce++;

        delete s;
    }

    return zaglowce;
}