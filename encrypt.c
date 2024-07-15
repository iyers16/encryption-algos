#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <stdbool.h>
#include "algorithms.h"

void display_help();

int main(int argc, char **argv)
{
  if(argc < 4)
  {
    display_help();
    exit(EXIT_FAILURE);
  }
  FILE* ifptr;
  FILE* ofptr;
  char ch;
  ifptr = fopen(argv[1], "r");
  ofptr = fopen(argv[2], "w");
  if(ifptr == NULL)
  {
    fprintf(stderr, "Input file could not be opened...\n");
    exit(EXIT_FAILURE);
  }
  if(ofptr == NULL)
  {
    fprintf(stderr, "Output file could not be created...\n");
    exit(EXIT_FAILURE);
  }
  while (!feof(ifptr))  {
    ch = fgetc(ifptr);
    fputc(ch, ofptr);
    printf("%c", ch);
  }
  fclose(ifptr);
  fclose(ofptr);
  
	return 0;
}

void display_help()
{
  fprintf(stderr, "Correct usage: encrypt <input file> <output file> <algorithm>\n");
  return;
}
