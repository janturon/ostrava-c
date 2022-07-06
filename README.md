# OSTRAVAK

Ostravak (ostrava-c) je preprocesorové rozšíření jazyka C++ do ostravštiny.

## Instalace a použití

Pro používání Ostravaku stačí načíst hlavičkový souboru **ostrava.h** do C++ programu.
Ve složce **[Integration](./Integration)** je volitelně též zvýrazňovač syntaxe pro PSPad a návod na zapnutí podpory pro .cp soubory ve VS Code.
Programům je doporučeno dávat příponu cp, což je málo používaná, ale podporovaná přípona C++ programů. Významově se blíží ostravskému "cyp" a kodér je tak před otevřením varován před pokročilou syntaxí jazyka Ostravak.

## Ostravština

Lidi, kteří mají tu smůlu, že se narodili na jih od Místku-Frýdku nebo na západ od Opavy, nechápou Ostravaka od přirozeni a měli by absolvovat základní kurz [OSTRAVSTINA.md](./OSTRAVSTINA.md)

## Přiklady / tutoryjal

Příklady ze složky **Examples** jde použít jako tutoriál v tomto pořadí.

1. *[bumbac.cp](./Examples/bumbac.cp)* Vypíše na konzoli čísla 1-100 podle pravidla bumbác. Cyklus, podmínky, výstup na konzoli, komentáře.
2. *[nasobilka.cp](./Examples/nasobilka.cp)* Zeptá se uživatele na základ násobilky a vypíše malou násobilku daného základu. Vstup z konzole, funkce, ošetření neplatného vstupu.
3. *[nahodne.cp](./Examples/nahodne.cp)* Vypíše náhodné slovo z ostravského slovníku *slovnik.dat*. Čtení ze souboru, tvorba objektu, integrace s C++ kontejnery `std::vector` a `std::string`
4. *[psc.cp](./Examples/psc.cp)* Zobrazí kraj dle čísla zadaného jako parametr programu. Parametry programu, vyjímky, statické proměnné, reference.

## Syntaxe

Všechny příkazy se ukončují jedním zvýrazů `pyco`, `kurva`, `gizde` i `gyzde`, podle nálady. Fajnovky můžou použít i středník.

### Typy

Kompatibilní s OstraJava

- `cyslo` int
- `cyslo_desetinne` float
- `chachar` char
- `bul` bool
- `dryst` - řetězec délky 80 znaků (vč. ukončovací 0)
- `guvno` nebo `na_picu` - void

Dále pak

- `referenca_na(X)` & X
- `cajger_na(X)` X *
- `pribity` const

### Podmínky

- `jak` if
- `tak` (používá se místo pascalovského then)
- `jinak` else

```
jak (výraz) tak { blok }
jinak { blok }
```

### Operátory

Pro tvorbu výrazů

- `nula` 0
- `je` ==
- `neni` !=
- `je_kec(X)` !(X)
- `ci` ||
- `a` &&
- `zgrupuj_po` %
- `nastav_na` =

### Cykly

- `rubat (5 krat) { blok }` - 5x zopakuje blok, ve kterém proměnná `sichta` nabývá hodnot 0 - 4, zatímco -- `normalni(sichta)` hodnot 1 - 5
- `rubat (do_aleluja) { blok }` - do_aleluja je synonymum pro dvě miliardy (nekonečný cyklus je filosoficky nesmysl)

cyklus `do - while` je pro gizdy, co neumí používat goto. Inteligentni programátoři používají návěští, které zároveň popisuje důvod návratu (místo nic neříkajícího `do`).
```
duvod_navratu:
  blok
jak (výraz) tak jdi_do duvod_navratu pyco
```

V cyklech můžou být dále výrazy

- `chuj_s_tym` continue
- `di_do_pici` break

### Vstup a výstup

- `najebej_do_konzole` printf
- `vyjebej_z_konzole` scanf
- `najebej_do_fajlu` fprintf
- `vyjebej_z_fajlu` fscanf
- `najebej_do_bafru` sprintf
- `vyjebej_z_bafru` sscanf

Pro pohodlné čtení řetězců a čísel je též definováno
- `dryst_z_konzole(name)` scanf("%79[^\n]", name)
- `cyslo_z_konzole(name)` scanf("%d", &name)
- `poklid_konzolu` - vyhodí ze vstupního bufferu konzoly všechny znay až do konce řádku (ošetření situace, kdy se očekává číselný vstup a není zadáno číslo)

Dále je definováno
- `dryst_z_fajlu` - soubor čteme po 80znakových blocích ukončených koncem řádky
- `cyslo_z_bafru`
- `cekej` getchar()
- `odradkuj` puts("")

### Funkce

- `befel` uvozuje funkci
- `vyrubej` return

```
befel cyslo faktoryjal (cyslo N) {
    jak (N < nula) tak bulat "faktoryjal zaporneho cysla je na picu" gizde
    jak (N je nula) tak vyrubej 1 pyco
    vyrubej N * faktoryjal (N - 1) pyco
}
```

### Bloky

- `robota {}` - hlavní program main
- `havirna {};` - třída s členy `tajny`, `protekcni` a `proflaknuty`
- `partyja {};` - struktura

### Vyjímky

- `prubni` try
- `bulat` throw
- `exception` pojeb
- `sichruj` nebo `zychruj` catch

### Komentáře

Komentáře jsou před zpracováním preprocesorem odstraněny, takže je nelze snadno nahradit.
Správný Ostravak však zásadně používá makro `ted_tam_najebu`, které je prázdné - za ním může pak následovat ničemu nepřiřazená řetězcová konstanta a ekvivalent středníku.

```
ted_tam_najebu "komentar k vypoctu" pyco
// ted_tam_najebu komentar k vypoctu pyco
```
