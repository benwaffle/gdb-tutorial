#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

void copystring(char *a, char *b) {
    int y = 23;
    strcpy(a, b);
}

void strings() {
    char *dest;
    copystring(dest, "this is string is waaaaaaaaaaaaaaaaaaaaay too long");
}

void assertions() {
    srand(time(NULL));
    int x = rand();
    assert(x == 40);
}


int main(int argc, char **argv) {
    switch (atoi(argv[1])) {
        case 1: strings(); break;
        case 2: assertions(); break;
    }
}
