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
  char* readline = malloc(MAX_LINE_LEN*sizeof(char)); //allocating space to store the contents of whatever text file is opened (up to 99 + \0)

  FILE * openfile = fopen(fileName,"r");
  strcpy(readline,fgets(readline,MAX_LINE_LEN-1,openfile));
  fclose(openfile); //closing the file and freeing the memory taken by the FILE pointer

  return readline; //return the contents of the opened textfile
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
  int size = strlen(str)-1; //getting the size of the string without the null character to calculate exact size needed for the expldoed string
  int result = ((size*(size+1))/2); //using nth triangle number formula to calculate the number of characters in the exploded string, using the size
  char* output=calloc(result+1,1); //allocating space for the exploded string itself


  for (int i=0; i<size; i++)
  {
    for(int j=0; j<=i; j++)
    {
      strcpy(output, strncat(output, &str[j],1)); //copies char to output string
    }
  }
  //nested for-loop found to be the best method of generating the nth triangle number pattern for strings
  return output;
}





