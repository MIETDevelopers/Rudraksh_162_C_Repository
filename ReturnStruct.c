//Author:Rudraksh Vasudev
//Purpose: To Return Structrue
#include<stdio.h>
struct MyObj
{
    double x, y;
};

struct MyObj foo(){
    struct MyObj a;
    
    a.x = 10;
    a.y = 10;
    
    return a;
}        

int main () {

    struct MyObj a;
    
    a = foo();    // This DOES work
      
    return 0;
}    
