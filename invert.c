#include<stdio.h>

void printBinary(int num) {
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int invert(int x, int p, int n) {
    int r = 1 << n;
    int l = 1 << p - 1;
    r = r | r - 1;
    l = l | l - 1;
    printBinary(r);
    printBinary(l);
    r = (r - l);
    return x ^ r;
}
int main() {
    int x;
    int p;
    int n;
    scanf("%d", &x);
    scanf("%d", &p);
    scanf("%d", &n);
    printBinary(x);
    printBinary(invert(x, p, n));    
}
