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
  char readline[MAX_LINE_LEN];

  FILE * openfile = fopen(fileName,"r");
  char* readlines = fgets(readline,MAX_LINE_LEN-1,openfile);
  //printf("%s", readline);

  fclose(openfile);

  return readlines;
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


  int result = ((size*(size+1))/2)+1;
  char* output = malloc(result*sizeof(char));
  char* input = malloc(size*sizeof(char));
  strcpy(input, str);
  strcpy(input, output);



  int count = 0;
  for (int i=0; i<size; i++)
  {
    for(int j=0; j<= count; j++)
    {
      strcpy(output, strncat(output, &input[j],1));

    }
    count++;
  }


  return output;
}

//Testing Main function used when creating/testing functions

/*
int main(int argc, char** argv) {
  char* explodedString = NULL;
  char* str = NULL;
  char file[MAX_LINE_LEN] = "test1.txt";
  str = readString(file);
  explodedString = mysteryExplode(str);
  printf("%s --> %s\n",str,explodedString);
}
*/


