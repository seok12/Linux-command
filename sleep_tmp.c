#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int s;

    if(argc == 2) {
        if((s = atoi(argv[1])) == 0) {
            fprintf(stderr, "usage: sleep sconds\n");
            exit(1);
        }

        sleep(s);
    }
    else if(argc == 3) {
        if((s = atoi(argv[2])) == 0) {
            fprintf(stderr, "usage: sleep sconds\n");
            exit(1);
        }

        if(strcmp(argv[1], "-s") == 0) {
            sleep(s);
        } else if(strcmp(argv[1], "-m") == 0) {
            sleep(s * 60);
        } else if(strcmp(argv[1], "-h") == 0) {
            sleep(s * 60 * 60);
        } else if(strcmp(argv[1], "-d") == 0) {
            sleep(s * 60 * 60 * 24);
        }
    }

    return 0;
}
