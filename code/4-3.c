#include <stdio.h>
#include <stdbool.h>

int main(void){
    int num;
    bool isPrime = true;

    scanf("%d", &num);

    if(num <= 1){
        isPrime = false;
    }
    else if(num == 2){
        isPrime = true;
    }
    else if(num % 2 == 0){
        isPrime = false;
    }
    else{
        for (int i = 3; i*i <= num; i += 2){
            if (num % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    printf("%s\n", isPrime ? "true" : "false");

    return 0;
}
