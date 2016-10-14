#include <stdio.h>

int main(int argc,char **argv) {
    printf("Hello World!\n");
    printf("received %d arguments\n",argc);
    int i;
    for (i = 0; i < argc; i++) {
        printf("  arg %d is %s\n",i,argv[i]);   
    }
    return 0;
}
