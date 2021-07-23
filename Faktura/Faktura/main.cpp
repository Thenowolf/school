#include <iostream>
#include "Faktura.h"

using namespace std;

int main()
{
	Faktura *pocitac = new Faktura(0, new Osoba("Denis Lokaj", "Frydek-Mistek"));

	pocitac->PridatPolozku("Zdroj", 2199);
	pocitac->PridatPolozku("Case", 999);
	pocitac->PridatPolozku("CPU", 6999);
	pocitac->PridatPolozku("GPU", 11999);
	pocitac->PridatPolozku("RAM", 1899);
	pocitac->PridatPolozku("Motherboard", 3799);
	pocitac->PridatPolozku("HDD", 1699);

	cout << "Jmeno: " << pocitac->GetOsoba()->GetJmeno() << endl;
	cout <<	"Bydliste: " << pocitac->GetOsoba()->GetAdresa() << endl;
	cout << "K Zaplaceni : " << pocitac->CelkovaCena() << " Kc" << endl;


	system("pause");
	return 0;
}