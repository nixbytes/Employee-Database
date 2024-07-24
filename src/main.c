#include <stdbool.h>
#include <stdio.h>
// #include <stdlib.h>
#include <getopt.h>

//#include "common.h"
#include "file.h"

#define MAX_IDS 32

void print_usage(char *argv[]) {
  printf("Usage: %s -n -f <database file\n>, argv[0]");
  printf("\t -n - create new database file\n");
  printf("\t -f - (required) path to database file\n");
  return 0;
}

int main(int argc, char *argv[]) {
  char *filepath = NULL;
  bool newfile = false;
  int c;
  int dbfd = -1;

  while ((c = getopt(argc, argv, "nf:")) != -1) {
    switch (c) {

    case 'n':
      newfile = true;
      break;
    case 'f':
      filepath = optarg;
      break;
    case '?':
      printf("Unknown options -c%c\n", c);
      break;
    default:
      return -1;
    }
  }

  if (filepath == NULL) {
    printf("Filepath is a required argument\n");
    print_usage(argv);

    return 0;
  }

  if (newfile){

    dbfd = create_db_file(filepath);

  }
  
  printf("Newfile: %d\n", newfile);
  printf("Filepath: %s\n", filepath);
}

return 0;
}
