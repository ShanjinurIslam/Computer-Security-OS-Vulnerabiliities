#include <stdio.h>
#include <unistd.h>
int main(int argc, char** argv) {
    printf("Real user id is %d\n", getuid());    
    printf("Effective user id is %d\n", geteuid());    
    return 0;
}