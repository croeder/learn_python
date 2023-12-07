#include <stdio.h>

void f(int i ) {
    printf("f:%d\n", i);
    i=99;
    printf("f:%d\n", i);
}

void g(int *ip) {
    printf("g:%d\n", *ip);
    *ip=99;
    printf("g:%d\n", *ip);
}


void h(int &ir) {
    printf("h:%d\n", ir);
    ir=99;
    printf("h:%d\n", ir);
}


int main() {
    int i=3;
    f(i);
    printf("m:%d\n\n", i);

    i=3;
    g(&i);
    printf("m:%d\n\n", i);

    i=3;
    h(i);
    printf("m:%d\n\n", i);
}
