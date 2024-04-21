#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>

struct MagneticFieldstregth{
  char name[10];
  float x;
  float y;
};

void readMagneticFieldstregth(struct MagneticFieldstregth* Mf){
  printf("Name:");
  scanf_s("%s", Mf->name, 10);

  printf("\nx-Komponente:");
  scanf_s("%f", &Mf->x);

  printf("\ny-Komponente:");
  scanf_s("%f", &Mf->y);

}

void printMagneticFieldstregth(struct MagneticFieldstregth* Mf){
  printf("%s(%.2f/%.2f)\n", Mf->name, Mf->x, Mf->y);
}

void addMagneticFieldstregth(struct MagneticFieldstregth* Mf, struct MagneticFieldstregth* Mf2, struct MagneticFieldstregth* result){
  result->x = Mf->x + Mf2->x;
  result->y = Mf->y + Mf2->y;
  printf("%s+%s(%.2f/%.2f)\n", Mf->name, Mf2->name, result->x, result->y);
}

int main(){
  SetConsoleOutputCP(1252);
  SetConsoleCP(1252);
  struct MagneticFieldstregth Mf, Mf2, Mres;

  readMagneticFieldstregth(&Mf);

  printf("Erste Feldtsärke: \n");
  printMagneticFieldstregth(&Mf);

  readMagneticFieldstregth(&Mf2);

  printf("\nZweite Feldtsärke:");
  printMagneticFieldstregth(&Mf2);

  printf("\nGesamte Feldtsärke:");
  addMagneticFieldstregth(&Mf, &Mf2, &Mres);
  return 0;
}