#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    vector<int> vec;

    printf("%u\n", vec.size() - 2);
    printf("%d\n", vec.size() - 2);

    for(int i = 0; i < int(vec.size() - 2); i++)
    {
        printf("i = %d\n", i);
    }

    a = 1;
    b = -1;
    c = 9;
    printf("%d, %d, %d\n", a, b, c);
}

