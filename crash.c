#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

void copystring(char *a, char *b) {
    int y = 23;
    strcpy(a, b);
}

void strings() {
    char *dest;
    copystring(dest, "this is string is waaaaaaaaaaaaaaaaaaaaay too long");
}

void assertions() {
    int x = 2;
    assert(x == 40);
}


int main(int argc, char **argv) {
    if (atoi(argv[1]) == 1)
        strings();
    else
        assertions();
}
