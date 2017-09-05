#pragma once

typedef struct {
	char matr[20];
	char vorname[20];
	char nachname[20];
	char startdatum[20];
	//Adresse
	char strasse[20];
	char hausnr[20];
	char plz[20];
	char ort[20];
	char telmobil[20];
	char telfest[20];
	char mail[40];
	char firma[30];
	char betreuervor[20];
	char betreuernach[20];
}student;

typedef struct {
	//Firmenadresse
	char firma[30];
	char strasse[20];
	char hausnr[20];
	char plz[20];
	char ort[20];
	//Ansprechpartner
	char vorname[20];
	char nachname[20];
	char position[20];
	char telmobil[20];
	char telfest[20];
	char mail[40];
}firma;

extern void csv_student(student stud[120]);
extern void csv_firma(firma f[120]);


extern void einlesen_student(student stud[120]);
extern void einlesen_firma(firma f[120]);

extern void menu(char *befehl);