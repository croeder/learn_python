#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

class Foo {
public:
    Foo() {i=0;}
    Foo(int i) {this->i=i;}
    void setI(int i) {this->i = i;}
    int getI() { return this->i; }
    std::string toString() { return "Foo:" + std::to_string(i); }
    bool operator==(Foo f) { return i == f.i; }
private:
    int i;
};

int main() {

    int i=3;
    if (i==3) { std::cout << "primitive ==" << std::endl; }

    Foo f = Foo(3);
    if (f == Foo(3)) { std::cout << "object == " << std::endl; }

    Foo *fp1 = new Foo(3);
    Foo *fp2 = new Foo(3);
    if (fp1 == fp1) { std::cout << "obvi" << std::endl; }
    if (fp1 == fp2) { std::cout << "nah" << std::endl; }
    if (*fp1 == *fp2) { std::cout << "*nah" << std::endl; }
}

