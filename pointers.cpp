#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    // // int a= 10;
    // // int *p;  //Declaring pointer// for declaration use star//for drefrencing use star
    // // p=&a; //Address 'a' stores in 'p'//p is a pointer type variable
    // // cout<<a<<endl;
    // // printf("using ponter %d %d" ,p,&a);//if u write only p you got address, if you write *p pointer

    // //pointer to an array
    // //first of all create an array size of 5
    // int A[5]={2,4,5,8,89};
    // //then i will take pointer p store the address
    // int *p;
    // //now initializing
    // p=A;//you dont give ampersand when you giving array name to pointer
    // // Now i will access all the members
    // for(int i=0;i<5;i++)
    // cout<<p[i]<<endl;//So in place A we can use p also

    //Now creating Array in heap
    int *p;
    // p=(int *)malloc(5*sizeof(int));//for maclloc function use stdlib.h in header malloc function allocate the memory five integer
    p= new int[5];//Dynamically allocating memory in heap
    p[0]=12;p[1]=33;p[2]=44;p[3]=45;p[4]=32;
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;

    delete [] p;//now free the memory
    free(p);
    return 0;
}