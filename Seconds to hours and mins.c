#include <stdio.h>

int main() 
{
    int total_sec, h, m, s;
    scanf("%d", &total_sec);
    h = total_sec / 3600;
    m = (total_sec % 3600) / 60;
    s = total_sec % 60;
    printf("%d Hours, %d Minutes, %d Seconds\n", h, m, s);
    return 0;
}
