#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    // Every pointer takes 8 bytes (Older compilers it takes 4 bytes)

    p = &a; // Dereferencing (& is the address)

    // cout<<a<<endl;
    // printf("using pointer value %d\n", *p);
    // printf("using pointer address %d\n", p);

    int A[5] = {2, 4, 6, 8, 10};
    int *p2;
    int *p3;

    p2 = A; // name of the arrays is the address
    p3 = &A[0];

    int *p4;
    int *p5;
    p4 = (int *)malloc(5 * sizeof(int)); // Creating a array on heap (C)
    p5 = new int[5];                     // Creating a array on heap (C++)

    p4[0] = 10;
    p4[1] = 15;
    p4[2] = 23;
    p4[3] = 34;
    p4[4] = 345;

    p5[0] = 10;
    p5[1] = 15;
    p5[2] = 23;
    p5[3] = 34;
    p5[4] = 345;

    for (int i = 0; i < 5; i++)
    {
        cout << p5[i] << endl;
    }

    // Deleting data from the heap
    free(p4);    // C
    delete[] p5; // C++
    return 0;
}