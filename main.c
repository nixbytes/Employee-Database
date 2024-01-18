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

void initialize_employee(struct employee_t *e) {
  // initializing the Emplpoyee pointers
  // allows to access elements
  static int numEmployees = 0;
  numEmployee++;
  e->id = 0;
  e->income = 0;
  e->staff = false;

  return numEmployees;
}

int main() {

  struct employee_t *employees = malloc(sizeof(employee_t));
  // Handle allocations
  if (employees == NULL) {
    printf("Allocation Of memory failed\n");
    return -1;
  }

  initialize_employee(&employees[0]);

  free(employees);

  employees = NULL;

  return 0;
}
