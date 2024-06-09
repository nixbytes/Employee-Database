#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_IDS 32

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

int main() {

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

  return 0;
}
