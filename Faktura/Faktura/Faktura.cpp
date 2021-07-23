#include <iostream>
#include "Faktura.h"

using namespace std;

Osoba::Osoba(string jmeno, string adresa)
{
	this->jmeno = jmeno;
	this->adresa = adresa;
}

string Osoba::GetJmeno()
{
	return this->jmeno;
}

string Osoba::GetAdresa()
{
	return this->adresa;
}

PolozkaFaktury::PolozkaFaktury(string nazev, int cena)
{
	this->cisloPolozky = 0;
	this->nazev = nazev;
	this->cena = cena;
}

int PolozkaFaktury::GetCena()
{
	return this->cena;
}

Faktura::Faktura(int cislo, Osoba *osoba)
{
	this->cislo = cislo;
	this->osoba = osoba;
	this->polozky = new PolozkaFaktury*[300];
	this->pocetPolozek = 0;
}

Faktura::~Faktura()
{
	for (int i = 0; i < 300; i++)
	{
		delete polozky[i];
	}
	delete[] this->polozky;
}

PolozkaFaktury* Faktura::PridatPolozku(string nazev, int cena)
{
	PolozkaFaktury* NovaPolozka = new PolozkaFaktury(nazev, cena);

	this->polozky[this->pocetPolozek] = NovaPolozka;
	this->pocetPolozek++;
	return NovaPolozka;
}

Osoba* Faktura::GetOsoba()
{
	return this->osoba;
}

int Faktura::CelkovaCena()
{
	int soucet = 0;
	for (int i = 0; i < (this->pocetPolozek); i++)
	{
		soucet += polozky[i]->GetCena();
	}
	return soucet;
}