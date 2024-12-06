#include<iostream>
#include<stdio.h>
using namespace std;
int main()

{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int A[n];
    A[0] = 2;
    //  int A[10]={2,4,6,3,21,2,4,5};
    // int A[10]={0};
    // int A[]={2,4,6,8,10,12,14};
    // A[0]=12;
    // A[1]=15;
    // A[2]=25;
    //Cout for C++
    // cout<<sizeof(A)<<endl;
    // cout<<A[1]<<endl;
    //Printf is for c language
    // printf("%d\n",A[2]);

    //Other method to accsesing all the element for each
    for (int x:A)

    // for(int i=0;i<10;i++)
    {
        // cout<<A[i]<<endl;
         cout<<x<<endl;
    }
    return 0;
}