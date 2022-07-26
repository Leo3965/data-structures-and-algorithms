#include<iostream>
#include<stdio.h>

using namespace std;

int main() 
{
    int A[5]; // Integer takes 4 bites
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    int B[] = {2, 4, 6, 8, 10};

    cout<<sizeof(A)<<endl; // it's line slash n
    cout<<sizeof(A[1])<<endl;
    printf("%d\n", A[2]);

    for(int i = 0; i < 5; i++)
    {
        cout<<B[i]<<endl;
    }

    for ( int x:A)
    {
        cout<<x<<endl;
    }

    cout<<"------------- USER INPUT ------------------"<<endl;
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    //int C[n];
    //C[0] = 2;

    return 0;
}