
#include <stdio.h>

int main() {
    int width = 1189, height = 841;

    printf("Size A0: %dmm x %dmm\n", width, height);
    printf("Size A1: %dmm x %dmm\n", height, width / 2);
    printf("Size A2: %dmm x %dmm\n", width / 2, height / 2);
    printf("Size A3: %dmm x %dmm\n", height / 2, width / 4);
    printf("Size A4: %dmm x %dmm\n", width / 4, height / 4);
    printf("Size A5: %dmm x %dmm\n", height / 4, width / 8);
    printf("Size A6: %dmm x %dmm\n", width / 8, height / 8);
    printf("Size A7: %dmm x %dmm\n", height / 8, width / 16);
    printf("Size A8: %dmm x %dmm\n", width / 16, height / 16);

    return 0;
}
