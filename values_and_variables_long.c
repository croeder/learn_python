

#include <stdio.h>
#include <stdlib.h>


void lesson_1() {
    // stack variables
    printf("\nlesson 1.\n");

    int int_variable=3;
    printf("%d\n" , int_variable);
    int_variable=4;
    printf("%d\n" , int_variable);


    int int_var2=99;
    printf("%d\n" , int_var2);
    int_variable = int_var2;
    printf("%d\n" , int_variable);
    printf("%d\n" , int_var2);

    int_var2=-1;
    printf("%d\n" , int_variable);
    printf("%d\n" , int_var2);
}

void lesson_2() {
    // stack variables and pointers to them
    printf("\nlesson 2.\n");

    int int_variable=3;
    printf("%d\n" , int_variable);

    int *int_ptr = &int_variable;
    printf("%d\n" , *int_ptr);
    printf("%d\n" , int_variable);

    *int_ptr = 99;
    printf("%d\n" , *int_ptr);
    printf("%d\n" , int_variable);
}

void lesson_3() {
    // pointers and shared values
    printf("\nlesson 3.\n");

    int int_variable=3;
    printf("%d\n" , int_variable);
    int *int_ptr_1 = &int_variable;;
    printf("%d\n" , *int_ptr_1);
    int *int_ptr_2 = &int_variable;;
    printf("%d\n" , *int_ptr_2);

    *int_ptr_1 = 99;
    printf("%d\n" , *int_ptr_1);
    printf("%d\n" , *int_ptr_2);

    
}


void lesson_4() {
    // dynamic memory allocation (heap memory)
    printf("\nlesson 4.\n");

    int *int_ptr = malloc(sizeof(int));
    *int_ptr = 99;
    printf("%d\n" , *int_ptr);
    free(int_ptr);
}

    
    
int main() {
    lesson_1();
    lesson_2();
    lesson_3();
    lesson_4();
}
