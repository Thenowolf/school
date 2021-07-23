#pragma once
#include <string>
using namespace std;

class Osoba
{
	string jmeno;
	string adresa;
public:
	Osoba(string jmeno, string adresa);
	string GetJmeno();
	string GetAdresa();
};

class PolozkaFaktury
{
	int cisloPolozky;
	string nazev;
	int cena;
public:
	PolozkaFaktury(string nazev, int cena);
	int GetCena();
};

class Faktura
{
	int cislo;
	int pocetPolozek;
	Osoba *osoba;
public:
	PolozkaFaktury** polozky;
	Faktura(int cislo, Osoba *osoba);
	~Faktura();
	PolozkaFaktury* PridatPolozku(string nazev, int cena);
	Osoba* GetOsoba();
	int CelkovaCena();
};
