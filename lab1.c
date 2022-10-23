/*
 * Implement your solution in this file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"

   /*
 * readString - reads a line from a file given by
 * fileName and returns it as a c-string.  The line
 * return is removed from the string.
 *
 * fileName is c-string representing the file to read.
 *
 */
char* readString(char* fileName){
  char* readline = malloc(MAX_LINE_LEN*sizeof(char));

  FILE * openfile = fopen(fileName,"r");
  strcpy(readline,fgets(readline,MAX_LINE_LEN-1,openfile));

  fclose(openfile);


  return readline;
}

/*
 * mysteryExplode - takes a string of characters and explodes it
 * as follows:
 *
 * A non-empty string such as "Code" is turned into "CCoCodCode".
 *
 *   Return a new string similar to the string given above.
 *
 *  Example:
 *   mysteryExplosion("Code") --> "CCoCodCode"
 *   mysteryExplosion("abc") --> "aababc"
 *   mysteryExplosion(":)") --> "::)"
 *
 */
char* mysteryExplode(const char* str){
  int size = strlen(str)-1;
  int result = ((size*(size+1))/2);

  char* output = malloc(result*sizeof(char));
  output=calloc(result+1,1);


  int count = 0;
  for (int i=0; i<size; i++)
  {
    for(int j=0; j<=count; j++)
    {
      strcpy(output, strncat(output, &str[j],1));

    }
    count++;
  }

  return output;
}





