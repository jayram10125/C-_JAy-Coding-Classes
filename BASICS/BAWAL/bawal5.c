#include <stdio.h>
#include <windows.h>

int main() {
    // printf("Sleeping for 5 seconds...\n");
    // Sleep(5000); // 5000 milliseconds = 5 seconds
    // printf("Awake now!\n");
    int a=5,y;
    a++;
    y=a;
    Sleep(5000);
    printf("%d",y);
    return 0;
}
