#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <istream>
#include "head.h"
#include <fstream>
#include <sstream>


void csv_student(student stud[120]) {

	int positions;										//Einlesen der Anzahl der momentan gespeicherten Studenten
	FILE * anzahls_daten_alt;
	anzahls_daten_alt = fopen("anzahls.txt", "r+");
	fscanf(anzahls_daten_alt, "%i", &positions);
	fclose(anzahls_daten_alt);

	FILE * student_csv;
	student_csv = fopen("studenten.csv", "w");
	for (int i = 0; i < positions; i++) {
		fprintf(student_csv, "%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s\n", stud[i].matr, stud[i].vorname, stud[i].nachname, stud[i].startdatum, stud[i].strasse, stud[i].hausnr, stud[i].plz, stud[i].ort, stud[i].telmobil, stud[i].telfest, stud[i].mail, stud[i].firma, stud[i].betreuervor, stud[i].betreuernach);
	}
	fclose(student_csv);

}

void csv_firma(firma f[120]) {

	int positionf;										//Einlesen der Anzahl der momentan gespeicherten Firmen
	FILE * anzahlf_daten_alt;
	anzahlf_daten_alt = fopen("anzahlf.txt", "r+");
	fscanf(anzahlf_daten_alt, "%i", &positionf);
	fclose(anzahlf_daten_alt);

	FILE * firma_csv;
	firma_csv = fopen("firma.csv", "w");
	for (int i = 0; i < positionf; i++) {
		fprintf(firma_csv, "%s;%s;%s;%s;%s;%s;%s;%s;%s;%s;%s\n", f[i].firma, f[i].strasse, f[i].hausnr, f[i].plz, f[i].ort, f[i].vorname, f[i].nachname, f[i].position, f[i].telmobil, f[i].telfest, f[i].mail);
	}
	fclose(firma_csv);

}

void einlesen_student(student stud[120]) {


	FILE * student_einlesen;
	student_einlesen = fopen("studenten.bin", "rb");
	fread(stud, sizeof(student), 120, student_einlesen);
	fclose(student_einlesen);

}

void einlesen_firma(firma f[120]) {

	FILE * firma_einlesen;
	firma_einlesen = fopen("firma.bin", "rb");
	fread(f, sizeof(firma), 120, firma_einlesen);
	fclose(firma_einlesen);

}

void menu(char *befehl) {

	system("cls");
	printf("\n-------------------------------------------------------------------------------\n");
	printf(" e .... Eingabe neuer Datensatz\n");
	printf(" a .... Ausgabe vorhandener Dateien\n");
	printf(" s .... Daten suchen\n");
	printf(" c .... Datensatz bearbeiten\n");
	printf(" l .... Datensatz loeschen\n");
	printf(" b .... Programm Beenden\n");
	printf("\n-------------------------------------------------------------------------------\n");
	printf("Eingabe :  ");

	scanf("%c", &*befehl);
	fflush(stdin);
	system("cls");
}


