#include<stdio.h>
#include<assert.h>

void printBinary(int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int sign(int x) {
    int sign_bit = (x >> 31);
    return (sign_bit | (!!x));
}

int main() {
    int num;
    scanf("%d", &num);
    int res = sign(num);
    printf("%d", res);
}
