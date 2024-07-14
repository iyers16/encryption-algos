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
  printf("Good\n");

	return 0;
}

void display_help()
{
  fprintf(stderr, "Correct usage: encrypt <input file> <output file> <algorithm>\n");
  return;
}
