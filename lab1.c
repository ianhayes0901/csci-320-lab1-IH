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
  fgets(readline,MAX_LINE_LEN, openfile);
  readline[strcspn (readline, "\n" )] = '\0'; //replaces the null character added from fgets to be a null charater
  fclose(openfile); //closing the file and freeing the memory taken by the FILE pointer

  return readline;
  //return readline; //return the contents of the opened textfile
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
  char* exploded_string;
  int str_size = strlen(str); //getting the size of the string without the null character to calculate exact size needed for the exploded string
  int exploded_string_size = ((str_size*(str_size+1))/2)+1; 
  /*using nth triangle number formula to calculate the number of characters in the exploded string
  *using the size of the passed string and adding one extra to account for null character
  */
  exploded_string = (char *)malloc(exploded_string_size); //allocating space for the exploded string itself
  memset(exploded_string,'\0',exploded_string_size);
  for(int i = 0; i < str_size; i++)
  {
    strncat(exploded_string,str,i+1); //copies i+1 total characters from str to the output string exploded_string
  }
  return exploded_string;
}





