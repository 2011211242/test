#include <unistd.h>
#include <cstdio>
using namespace std;

static int i = 0;
int main(){
    int pid = fork();
    printf("pid = %d\n", pid);
    i++;

    if(pid != 0){
        sleep(1);
    }

    printf("%d\n", i);
}
