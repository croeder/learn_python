#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

// strings and wrapped Integers are immutable

class Foo {
    public:
     Foo();
     Foo(int i);
     int getI();
     void setI(int i);
     std::string toString();
    private:
     int i;
};

    Foo::Foo() { i=0; }
    Foo::Foo(int i) { this->i = i; }
    int Foo::getI()  { return i; }
    void Foo::setI(int i) { this->i = i; }
    std::string Foo::toString() {  return "Foo:" + std::to_string(i); }

void f(Foo i ) {
    std::cout << "f:" << i.toString() << " " << &i  << std::endl;
    i=Foo(99);
    std::cout << "f:" << i.toString() << " " << &i  << std::endl;
}
void ff(Foo i ) {
    std::cout << "ff:" << i.toString() << " " << &i  << std::endl;
    i.setI(99);
    std::cout << "ff:" << i.toString() << " " << &i  << std::endl;
}

void g(Foo *ip) {
    std::cout << "g:" << ip->toString() << " " << ip  << std::endl;
    *ip=Foo(99);
    std::cout << "g:" << ip->toString() << " " << ip  << std::endl;
}
void gg(Foo *ip) {
    std::cout << "gg:" << ip->toString() << " " << ip  << std::endl;
    ip->setI(99);
    std::cout << "gg:" << ip->toString() << " " << ip  << std::endl;
}


void h(Foo &ir) {
    std::cout << "h:" << ir.toString() << " " << &ir  << std::endl;
    ir=Foo(99);
    std::cout << "h:" << ir.toString() << " " << &ir  << std::endl;
}
void hh(Foo &ir) {
    std::cout << "hh:" << ir.toString() << " " << &ir  << std::endl;
    ir.setI(99);
    std::cout << "hh:" << ir.toString() << " " << &ir  << std::endl;
}

void x(Foo *ip) {
    std::cout << "g:" << ip->toString() << " " << ip  << std::endl;
    ip= new Foo(99);
    std::cout << "g:" << ip->toString() << " " << ip  << std::endl;
}



int main() {
    Foo i=Foo(3);
    f(i);
    std::cout << "main:" << i.toString() << " " << &i  << std::endl;

    i=Foo(3);
    ff(i);
    std::cout << "main:" << i.toString() << " " << &i  << std::endl;

    i=Foo(3);
    g(&i);
    std::cout << "main:" << i.toString() << " " << &i  << std::endl;

    i=Foo(3);
    gg(&i);
    std::cout << "main:" << i.toString() << " " << &i  << std::endl;

    i=Foo(3);
    h(i);
    std::cout << "main:" << i.toString() << " " << &i  << std::endl;

    i=Foo(3);
    hh(i);
    std::cout << "main:" << i.toString() << " " << &i  << std::endl;

    i=Foo(3);
    x(&i);
    std::cout << "main:" << i.toString() << " " << &i  << std::endl;
}


