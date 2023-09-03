#include<stdio.h>

int bang(int x) {
    int neg_x = ~x + 1;
    int result = (x | neg_x) >> 31;

    return result + 1;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d", bang(x));
}
