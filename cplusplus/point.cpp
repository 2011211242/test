#include <cstdio>
using namespace std;

int main()
{
    char * p[] = {"Hello", "world", "offer"};
    char ** ptr = p;
    printf("%s\n", *ptr++);
}
