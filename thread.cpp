#include <thread>
#include <unistd.h>
#include <cstdio>
using namespace std;

static int a = 0;

void func(){
    a++;
    printf("%d\n", a);
    exit(0);
}

int main(){
    thread t = thread(func);
    sleep(1000);
    //func();
    t.join();
}
