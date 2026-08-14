#include <stdio.h>

int main() {
    int s; 
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &s);

    hours = s / 3600;
    minutes = (s % 3600) / 60;
    seconds = s % 60; 

    printf("Converted format [HH:MM:SS]: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
