// from: https://www.hackerrank.com/challenges/for-loop-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void print_num(int i) {
    char* word;
    switch (i) {
        case 1: 
            word = "one";
            break;
        case 2:
            word = "two";
            break;
        case 3:
            word = "three";
            break;
        case 4:
            word = "four";
            break;
        case 5:
            word = "five";
            break;
        case 6:
            word = "six";
            break;
        case 7:
            word = "seven";
            break;
        case 8:
            word = "eight";
            break;
        case 9:
            word = "nine";
            break;
    }
    printf("%s\n", word);
}

void print_parity(int i) {
    i % 2 == 0 ? printf("even\n") : printf("odd\n");
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	for (int i = a; i<= b; i++) {
          if(i < 10) print_num(i);
          else print_parity(i);
    }

    return 0;
}
