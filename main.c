#include <stdio.h>

#define MAX_IDS 32

struct employee_t{

    int id;
    char firstname[64];
    char lastname[64];
    float income;

}


int main() {

  int personID = 1;
  printf("%d", personID);
  struct employee_t joe;
  joe.firstname = "joe";
  joe.lastname = "brew";
  joe.income = 1560.50;

  return 0;
}
