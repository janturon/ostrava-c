#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include "ostrava.h"

havirna slovnik {
    std::vector<std::string> data pyco

proflaknute:
    befel slovnik (pribity cajger_na(chachar) fajl) {
        cajger_na(FAJL) slovnik nastav_na fopen(fajl, "r+") pyco
        dryst (bafr) kurva
        cyslo fertig kurva

        ted_tam_najebu "načtení řádků ze souboru do proměnné data" pyco
        dalsi_slovo:
            fertig nastav_na dryst_z_fajlu(slovnik, bafr) pyco
            jak (fertig > nula) tak this->data.push_back(bafr) pyco
        jak (fertig neni EOF) tak jdi_do dalsi_slovo gizde

        fclose(slovnik) pyco
    }

    befel pribity cajger_na(chachar) nahodne() {
        cyslo index nastav_na rand() zgrupuj_po this->data.size() pyco
        vyrubej this->data[index].c_str() pyco
    }
};

robota {
    srand (time(NULL)) pyco
    slovnik ostravstina("slovnik.dat") pyco
    najebej_do_konzole(ostravstina.nahodne()) pyco
    cekej pyco
}