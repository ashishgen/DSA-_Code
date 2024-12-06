#include<iostream>
#include<stdio.h>
using namespace std;
//how to define structure
struct Rectangle
{
    int length;
    int breadth;
    char x;
};//You can write r1 here also one or more variable

 //Declaration of structure outside the function
    // struct Rectangle r1;
    
int main()
{
    //Declaration of structure
    struct Rectangle r1={10,20};
    r1.length=15;
    r1.breadth=7;


    //Access the member
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    
    // printf("%lu", sizeof(r1));
    return 0;
}
