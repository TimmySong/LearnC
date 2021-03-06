#include "encrypt.h" /* match the declaration of encrypt function inside the encrypt.h header file. */

void encrypt(char *message){
  /* Loop until it meets the \0 ending character. */
  while (*message) {
    *message = *message ^ 31; /* XOR encrypt. 1 + 0 -> 1, otherwise 0. */
    message++;
  }
}
