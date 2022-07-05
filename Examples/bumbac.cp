#include <cstdio>
#include "ostrava.h"

robota {
    rubej (do_aleluja) {

        ted_tam_najebu "chuj s nulou" pyco
        jak (sichta je nula) tak chuj_s_tym kurva

        ted_tam_najebu "bum nebo bac" pyco
        jak (sichta zgrupuj_po 15 je nula) tak najebej_do_konzole("bum bac") pyco
        jinak jak (sichta zgrupuj_po 3 je nula) tak najebej_do_konzole("bum") pyco
        jinak jak (sichta zgrupuj_po 5 je nula) tak najebej_do_konzole("bac") pyco

        ted_tam_najebu "cislo misto bum, bac" pyco
        jinak najebej_do_konzole("%d", sichta) pyco

        odradkuj pyco

        ted_tam_najebu "ser na to po 100. sichte" pyco
        jak (sichta je 100) tak di_do_pici gyzde
    }
    cekej pyco
}