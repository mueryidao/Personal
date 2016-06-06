#include<stdio.h>
#include<string.h>
#include<time.h>

int main()
{
    time_t rawtime;
    struct tm *info;
    char buffer[80];

    time(&rawtime);

    info = localtime(&rawtime);

    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", info);
    printf("buffer = %s\n", buffer);
    printf("Current local time = %s\n", asctime(info));

    return 0;
}
