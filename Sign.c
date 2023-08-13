#include<stdio.h>
#include<assert.h>

void printBinary(int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int arithmeticToLogical(int x, int shift_val) {
    int res = x >> shift_val;
    int mask = (1 << (32 - shift_val)) - 1; // Create a mask of lower bits set to 1
    res = res & mask;
    return res;
}

int sign(int x) {
    return arithmeticToLogical(x, 31);
}

int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
    int res = sign(num);
    printBinary(sign(num));
    res == 1 ? printf("%d \n", -1) : printf("%d \n", 1);
}
