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

  return 0;
}
