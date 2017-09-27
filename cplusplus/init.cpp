#include <bits/stdc++.h>

#define K 1024
#define M 1024 * K
#define G 1024 * M

const unsigned long long int k = 1024;
const unsigned long long int LEN = 4 * (unsigned long long int)G ;


int main()
{
    printf("M = %d\n", M);
    printf("G = %d\n", G);
    printf("LEN = %d\n", LEN);

    printf("sizeof(LEN) = %d\n", sizeof(LEN));

    char * a = new char [LEN];
    printf("sizeof(a) = %d\n", sizeof(a));

    for(int i = 0; i < LEN; i++)
    {
        if(a[i]!=0)
        {
            printf("has an nozero\n");
        }
        a[i] = 1;
    }
}
