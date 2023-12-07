// compile with clang++ on macos

#include <stdio.h>

class Thing {
    int  int_value;
public:
    Thing();
    Thing(int i); 
    Thing(Thing &t); 
    void setI(int i);
    int getI();
};
Thing::Thing() { int_value=0; }
Thing::Thing(int i) { int_value=i; }
Thing::Thing(Thing &t) { int_value=t.getI(); }
void Thing::setI(int i) { int_value = i; }
int Thing::getI() { return(int_value); }

int main() {
    Thing *myThingPtr = new Thing();
    printf("%d \n", myThingPtr->getI() );
    myThingPtr->setI(3);
    printf("%d \n", myThingPtr->getI() );
    
    printf("=======================\n");
    Thing myThing;
    printf("%d \n", myThingPtr->getI() );
    myThing.setI(3);
    printf("%d \n", myThing.getI() );

    printf("=======================\n");
    Thing  myOtherThing(4);
    printf("%d \n", myOtherThing.getI() );
    myThingPtr->setI(3);
    printf("%d \n", myOtherThing.getI() );

}

