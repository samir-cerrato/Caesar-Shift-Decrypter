/*Samir Cerrato
COMP211
Professor Manfredi
September 25, 2022
*/

#include <stdio.h>
#include <string.h>

char min = ' ';
char max = '~';

char reverseshift(char c, int s){
  return min+(c-min+s) % (max - min + 1);

}

int main(void){

  char string[256];
  char cipher[256];


  printf("Enter a string to encyrpt: ");
  fgets(string, 256, stdin);

  for (int shift = 0; shift < 95; shift++){
    for (int i = 0; i < strlen(string)-1; i++) {
      cipher[i]= reverseshift(string[i], shift);
    }
    printf("Possible plain text is  %s using shift of %d\n", cipher, shift);
  }

  return 0;

}
