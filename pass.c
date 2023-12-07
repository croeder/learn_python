

#include <stdio.h>


void f(int i) { 
    printf("%d %p \n", i, &i) ;
    i = 99;
    printf("%d %p \n", i, &i) ;
}

int main() {
    int j=3;
    printf("%d %p\n", j, &j);
    f(j);
    printf("%d %p\n", j, &j);
}
