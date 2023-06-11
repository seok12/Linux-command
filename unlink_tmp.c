#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[ ])
{
   if (unlink(argv[1]) == -1) {
       printf("usage: unlink file\n");
      return 1;
   }
   return 0;
 }
