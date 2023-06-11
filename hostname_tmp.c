#include <stdio.h>
#include <unistd.h>

#define LEN 256
int main(int argc, char* argv[])
{
    char host_name[LEN];
    
    if(gethostname(host_name, LEN) != 0) {
        printf("gethostname() 실행 실패\n");
        return 1;
    }
    printf("%s\n", host_name);
    return 0;
}
