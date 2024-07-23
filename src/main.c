#include <stdbool.h>
#include <stdio.h>
// #include <stdlib.h>
#include <getopt.h>

#include "common.h"
#include "file.h"

#define MAX_IDS 32

/*
struct employee_t {

  int id;
  char firstname[64];
  char lastname[64];
  float income;
  bool staff;
};

int initialize_employee(struct employee_t *e) {
  // initializing the Emplpoyee pointers
  // allows to access elements

  // Static Memory Allocation
  static int numEmployees = 0;
  numEmployees++;

  e->id = numEmployees;
  e->income = 0;
  e->staff = false;

  return numEmployees;
}
*/
int main(int argc, char *argv[]) {
  char *filepath = NULL;
  bool newfile = false;
  int c;

  while ((c = getopt(argc, argv, "nf:")) != -1) {
    switch (c) {

    case 'n':
      newfile = true;
      break;
    case 'f' filepath = optarg; break;

        case '?':
      printf("Unknown options -c%c\n", c) break;
    default:
      return -1;
    }
  }
  printf("Newfile: %d\n", newfile);
  printf("Filepath: %s\n", filepath);
}
/*
  struct employee_t *employees = malloc(sizeof(struct employee_t));

  // Handle allocations

  if (employees == NULL) {
    printf("Allocation Of memory failed\n");
    return -1;
  }

  for (int i = 0; i < 4; i++) {

    int id = initialize_employee(&employees[i]);
    printf("employee id, ID : %d\n", id);
  }
  //  initialize_employee(&employees[0]);

  free(employees);

  employees = NULL;
*/

return 0;
}
