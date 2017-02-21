#include <stdio.h>

int fib(int n) {
    int a = 0, b = 1, i;
    for (i = 0; i < n; ++i) {
        int c = a + b;
        b = c;
        a = b;
    }
    return a;
}

int main() {
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d\n", fib(i));
}
