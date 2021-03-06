#ifndef GARAGE_H
#define	GARAGE_H
 #include "mechanic.h"

#define MAX_GARAGE 10

tGarage* InsertGarage(tGarage*, short unsigned int*);
void SeachGarage(tGarage*, short unsigned int);
void ListGarage(tGarage*, short unsigned int);
tGarage *DeleteGarage(tGarage*, short unsigned int*);
tGarage *EditGarage(tGarage*, short unsigned int);
void ShowListHangar();
void ShowSpecialityList();
void ShowAllGarageFields();
void ShowGarage(tGarage*,short unsigned int);

short int ChooseGarage(tGarage*, short unsigned int);
short int SearchForNumber(tGarage*, short unsigned int, short int);
short int SearchForArea(tGarage*, short unsigned int);
short int SearchForSpeciality(tGarage*,short unsigned int);
short int SearchForFloor(tGarage*, short unsigned int);
short int SearchForHanger(tGarage*, short unsigned int);

bool IsValidGarageNr(short unsigned int, short unsigned int);
bool IsValidHangar(short unsigned int);
bool IsValidFloor(short unsigned int);
bool IsAreaValid(float*);
bool IsInputSearchFieldValid (short unsigned int,short unsigned int, short unsigned int);

short int CheckMultiplyOccurences(tGarage*, short unsigned int,short unsigned int*);

float GetGarageArea();

short unsigned int* FoundOccurrence(short unsigned int*,short unsigned int*,short unsigned int);
short unsigned int GetGarageFloor();
short unsigned int GetGarageHangar();
short unsigned int GetGarageSpeciality();
short unsigned int multiplyOcurrencesFound(tGarage*,short unsigned int,short unsigned int*);
#endif	/* GARAGE_H */
