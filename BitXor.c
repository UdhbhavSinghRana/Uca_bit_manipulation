#include<stdio.h>
#include<assert.h>
void printBinary(int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int bitXor(int x, int y) {
    return  ~(~(x & ~y) & ~(~x & y));
}
int main() {
    assert(bitXor(5, 3) == (5 ^ 3));
    assert(bitXor(0, 0) == (0 ^ 0));
    assert(bitXor(255, 0) == (255 ^ 0));
    assert(bitXor(255, 255) == (255 ^ 255));
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printBinary(a);
    printBinary(b);
    printBinary(bitXor(a, b));
}
