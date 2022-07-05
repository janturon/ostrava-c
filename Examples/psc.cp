#include <cstdio>
#include <exception>
#include "ostrava.h"

partyja Pojeb : pojeb {
    Pojeb(pribity cajger_na(chachar) hemzy) : hemzy(hemzy)
    { }
    pribity cajger_na(chachar) hemzy kurva
} kurva

befel pribity cajger_na(chachar) pscNaKraj(cyslo psc) {
    staticky pribity cajger_na(chachar) kraje[7] nastav_na {
        "Prazaci",
        "Prazske ghetto",
        "Jihozapadni Cesi",
        "Severocesi",
        "Vychodocesi",
        "Brnaci",
        "Borci nejvetsi"
    } kurva
    jak (psc < 10000 ci psc > 79999) tak bulat Pojeb("Divosi z Afriky nebo USA") pyco
    vyrubej kraje[psc / 10000 - 1] pyco
}

robota {
    prubni {
        jak (pocet_argumentu < 2) tak bulat Pojeb("Zadej PSC, pyco") gizde
        cyslo psc kurva
        jak (cyslo_z_bafru(argumenty[1], psc) neni 1) tak bulat Pojeb("PSC je cyslo, ty gizde") pyco
        najebej_do_konzole( pscNaKraj(psc) ) pyco
    }
    zychruj (pribita referenca_na(Pojeb) p) {
        najebej_do_konzole( p.hemzy ) pyco
    }
}