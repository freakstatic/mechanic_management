#include <stdio.h>
#include <stdlib.h>
#include "date.h"

typedef enum speciality {
    CARS = 0,
    SIMPLE_MOTORCYLES = 1,
    HIGH_CYLINDER_MOTORCYLES  = 2,
    TRUCKS = 3,
    BOATS_MOTOR = 4,
    BOATS_BI_MOTOR = 5
} enumSpeciality;

int main(void) 
{
    
 return (EXIT_SUCCESS);
}

bool IsSpecialityValid (unsigned short int inputSpeciality) {
    if (inputSpeciality < 0 || inputSpeciality > 5){
        printf("Especialidade inválido, insira corretamente");
        return false;
    }else {
        return true;
    }
}


