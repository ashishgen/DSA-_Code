#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
  int *p1;  // type of pointer
  char *p2;
  float *p3;
  double *p4;
  struct Rectangle *p5;

  cout<<sizeof(p1)<<endl;
  cout<<sizeof(p2)<<endl;
  cout<<sizeof(p3)<<endl;
  cout<<sizeof(p4)<<endl;
  cout<<sizeof(p5)<<endl;
  
  

  return 0;
}