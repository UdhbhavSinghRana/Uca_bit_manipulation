#include<stdio.h>
#include<assert.h>
void printBinary(int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int bitAnd(int x, int y) {
    return ~(~x | ~y);
}
int main() {
    assert(bitAnd(5, 3) == 1);
    assert(bitAnd(0, 0) == 0);
    assert(bitAnd(255, 0) == 0);
    assert(bitAnd(255, 255) == 255);

    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printBinary(a);
    printBinary(b);
    printBinary(bitAnd(a, b));
}
