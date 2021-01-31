#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

const int MAX_INPUT_SIZE = 1000+1;

int main() {

    int counts[10] = {0,0,0,0,0,0,0,0,0,0};
    
    char inp[MAX_INPUT_SIZE];
    gets(inp);

    char c;
    for (int i=0; (c=inp[i]) != 0; i++) {
        if (c >= '0' && c <= '9') {
            counts[c-'0']++;
        }
    }
    
    for (int i=0; i<10; i++) {
        printf(i<9 ? "%d " : "%d \n", counts[i]);
    }
    
    return 0;
}
