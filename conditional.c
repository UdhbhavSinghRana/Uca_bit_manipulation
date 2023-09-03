#include<stdio.h>

int conditional (int x, int y, int z) {
    int mask = ((!x) << 31) >> 31; 
    return (mask & z) | (~mask & y);
}

int main() {
    int x;
    int y;
    int z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    printf("%d", conditional(x, y, z));
}
