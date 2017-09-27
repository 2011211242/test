#include <cstdio>

const char * func_1(){
    const char * ptr = "helloworld";
    return ptr;
}

char * func_2(){
    char ptr[] = "helloworld";
    return ptr;
}

int main(){
    const char * ptr1 = func_1();
    char * ptr2 = func_2();
    printf("%s\n", ptr1);
    printf("%s\n", ptr2);
}
