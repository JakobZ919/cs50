#include <stdio.h>

int main() {
    int stairs;

    while (!(stairs > 1 && stairs < 9)){
        printf("Height(from 1 to 8): ");
    scanf("%d", &stairs);}

    for (int i = 1; i <= stairs; i++) {
        for (int j = 0; j < stairs - i; j++)
            printf(" ");
        for (int k=i;k>0;k-=1){
            printf("#");
        }
        printf(" ");
        for (int k=i;k>0;k-=1){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
