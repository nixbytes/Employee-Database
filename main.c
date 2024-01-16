#include <stdio.h>

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
  //  allows to access elements
  e->id = 0;
  e->income = 0;
  e->staff = false;

  return;
}

int main() {

  // int personID = 1;
  // printf("%d", personID);
  struct employee_t joe;
  //  joe.firstname = "joe";
  //  joe.lastname = "brew";
  // joe.income = 1560.50;
  // Allocation of memory for employee
  struct employee_t *employees = malloc(sizeof(employee_t));
  // Handle allocations
  if (employees == NULL) {
    printf("Allocation Of memory failed\n");
    return -1;
  }

  initialize_employee(&employees[0]);

  free(my_employees);

  employees = NULL;

  return 0;
}
