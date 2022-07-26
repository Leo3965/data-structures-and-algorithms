#include<stdio.h>
#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x; // Paring this element that consumes 1 byte will alocate 4 bytes
}; // r1, r2, r3; Global variables

int main()
{
    struct Rectangle r = {10, 5};
    printf("%lu\n", sizeof(r));

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    return 0;
}