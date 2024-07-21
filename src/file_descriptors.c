#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {

  int fd = open("./asdfasdf", O_RDONLY);
  if (fd == -1) {
    perror("open");
    return -1;
  }
}
