#include <stdio.h>
#include <time.h>

char* today(struct tm* t)
{
    switch(t->tm_wday) {
        case 0:
            return "일";
        case 1:
            return "월";
        case 2:
            return "화";
        case 3:
            return "수";
        case 4:
            return "목";
        case 5:
            return "금";
        case 6:
            return "토";
        default:
            return "";
    }
}

int main(int argc, char *argv[])
{
    struct tm* t;
    time_t base = time(NULL);

    t = localtime(&base);

    printf("%d년 %d월 %d일 %s요일 %d시 %d분 %d초\n", 1900 + t->tm_year, t->tm_mon + 1, t->tm_mday  , today(t), t->tm_hour, t->tm_min, t->tm_sec);
    
    return 0;
}
