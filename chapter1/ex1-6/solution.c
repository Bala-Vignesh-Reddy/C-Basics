#include <stdio.h>

int main(){
    int c;
    printf("Type a char or (Ctrl+D to exit from input)\n");
    c = getchar();
    printf("getchar() != EOF: %d\n", c != EOF);
}
