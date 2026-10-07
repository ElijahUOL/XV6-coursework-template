#include "kernel/types.h"
#include "user/user.h"

int main (int argc, char* argv[])
{
 if (argc == 1)
 {
  printf ("Error: no argument provided");
  exit(1);
 }
 else
 {
  int timePause = atoi(argv[1]);
  pause(timePause);
  exit(0);
 }
};
