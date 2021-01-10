//Matrix mit dynamischen Speicherverwaltung

//Die Deklaration der hier verwendete Funktion sind in .hpp Files zu finden
// und derer tatsächlischen Defintion in .cpp Files


#include <iostream>
#include <iomanip>

#include "matrix_arith.hpp"
#include "matrix_dyn.hpp"
#include "matrix_io.hpp"

using namespace std;



int main()
{
	// Einlesen der Dimension
	int zeilen, spalten;
	//cout << "Anzahl Zeilen: ";
	cin >> zeilen;
	//cout << "Anzahl Spalten: ";
	cin >> spalten;
	cout << boolalpha;

	int** Mi;
	double** Md;
	double** Msum;
	bool** Mb;

	// Speicher fuer Matrizen reservieren
	reservieren(Mi, zeilen, spalten);
	reservieren(Md, zeilen, spalten);
	reservieren(Msum, zeilen, spalten);
	reservieren(Mb, zeilen, spalten);

	// Matrixelemente aus Datei einlesen
	einlesen(Mi, zeilen, spalten);
	einlesen(Md, zeilen, spalten);
	einlesen(Mb, zeilen, spalten);

	// Ausgabe
	cout << "(int):\n";    print(Mi, zeilen, spalten);
	cout << "(double):\n"; print(Md, zeilen, spalten);
	cout << "(bool):\n";   print(Mb, zeilen, spalten);

	// Berechnungen
	matsum(Md, Mi, Msum, zeilen, spalten);
	neg(Mi, zeilen, spalten);
	neg(Mb, zeilen, spalten);

	// Ausgabe
	cout << "(Summe):\n";        print(Msum, zeilen, spalten);
	cout << "(int negiert):\n";  print(Mi, zeilen, spalten);
	cout << "(bool negiert):\n"; print(Mb, zeilen, spalten);

	// Freigabe des Speichers
	freigeben(Mi, zeilen);
	freigeben(Md, zeilen);
	freigeben(Msum, zeilen);
	freigeben(Mb, zeilen);

	return 0;
}
