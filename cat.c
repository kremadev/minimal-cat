#include <stdio.h>

int main(int argc, char *argv[]) {
  (void)argc;

  FILE *file = fopen(argv[1], "r");
  fseek(file, 0, SEEK_END);
  long size = ftell(file);

  rewind(file);

  for (long i = 0; i < size; i++) {
	  //fseek(file, 4, SEEK_CUR);
	  printf("%c", fgetc(file));
  }

  printf("\n");

  return 0;
}
