#include <cstdio>
#include "ostrava.h"

befel na_picu nasobilka(cyslo zaklad) {
    rubej(10 krat) {
        cyslo poradi nastav_na normalni(sichta) pyco
        najebej_do_konzole("%d x %d = %d", poradi, zaklad, poradi * zaklad) pyco
        odradkuj gizde
    }
}

befel cyslo jakou_nasobilku_kurva_chces bez_parametru {
    cyslo vysledek nastav_na nula pyco
    uzivatel_je_cyp:
        najebej_do_konzole ("Jakou nasobilku kurva chces? ") pyco
        cyslo fertig nastav_na cyslo_z_konzole(vysledek) pyco
        poklid_konzolu pyco
    jak (fertig neni 1) tak jdi_do uzivatel_je_cyp pyco
    jak (vysledek < 0 ci vysledek > 10) tak jdi_do uzivatel_je_cyp pyco
    vyrubej vysledek pyco
}

robota {
    cyslo zaklad nastav_na jakou_nasobilku_kurva_chces bez_parametru kurva
    nasobilka(zaklad) pyco
    cekej pyco
}