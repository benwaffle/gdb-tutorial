#include <stdio.h>

int main() {
    printf("Enter the correct number: ");

    int x;
    scanf("%d", &x);

    if (x == 42)
        puts("good job!");
    else
        puts("nope try again :(");
}
