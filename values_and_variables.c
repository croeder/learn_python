

#include <stdio.h>
#include <stdlib.h>



int main() {

    int i=3;
    int j=i;
    printf("i:%d &i:%p  j:%d  &j:%p\n", i, &i, j, &j);
    i=99;
    printf("i:%d &i:%p  j:%d  &j:%p\n", i, &i, j, &j);
}
