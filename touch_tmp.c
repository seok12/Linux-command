#include <stdio.h>
#include <utime.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    FILE *fp;

    if(argc < 2) {
        fprintf(stderr, "파일명을 적으세요\n");
        return 1;
    }

    if(access(argv[1], F_OK) != -1) { // 파일이 존재하면 시간 갱신
        utime(argv[1], NULL);
    }
    else { // 파일이 없을 시 새로 생성
        fp = fopen(argv[1], "w+");
        fclose(fp);
    }

    return 0;
}
