#include <stdio.h>

int main(int argc, char* argv[]) {
    char **ptr;
    extern char **environ; //extern 외부 변수 environ(모든 환경 변수를 가리키는 포인트 배열)를 참조
                           //extern는 외부 변수를 참조. ex) main.c 에서 test.c의 변수를 참조

    for(ptr = environ; *ptr != 0; ptr++) {
        printf("%s\n", *ptr);
    }

    return 0;
}
