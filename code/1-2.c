#include <stdio.h>

int main(void){

    printf("% 10s ", "name");
    printf("% 10s ", "id");
    printf("% 10s\n", "value");

    printf("% 10s ", "kim");
    printf("%010d ", 12);
    printf("% 10.2f\n", 4.120000);

    printf("% 10s ", "lee");
    printf("%010d ", 1922);
    printf("% 10.2f\n", 3.210000);

    printf("% 10s ", "park");
    printf("% 010d ", 432);
    printf("% 10.2f", 1.000000);
    return 0;
}
