#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

  if (argc != 2) {
    printf("Usage: %s <filename>\n", argv[0]);
  }

  int fd = open(argv[1], O_RDWR | O_CREAT, 0664);

  if (fd == -1) {

    perror("open");
    return -1;
  }

  char *data = "hello there file!\n";
  write(fd, data, strlen(data));

  close(fd);
  return 0;
}
