#include <stdlib.h>
#include <stdio.h>
#include <math.h>


#include "param.h"
#include "present.h"

/**
* Ici on fait l'allocation dynamique de la m�moire avec calloc pour mettre les valeur � z�ro
*/
void init(){
   state = (uint8_t *) calloc( PRESENT_CRYPT_SIZE, sizeof(uint8_t) );
   register_key = (uint8_t *) calloc( PRESENT_KEY_SIZE, sizeof(uint8_t) );
   round_key = (uint8_t *) calloc( PRESENT_CRYPT_SIZE, sizeof(uint8_t) );
}


