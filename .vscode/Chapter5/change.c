#include <stdio.h>

int change(int a) {
    a = 77; // Misnomer
    return a;
}

int main() {
    int b = 22;
    change(b); // The value of b remains 22
    printf("b is %d\n", b);
    printf("a is %d\n", change(b)); // The value of b remains 22
    return 0;
}