// from: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);

    int* arr = malloc(n*sizeof(int));

    int num;
    for (int i=0; i<n; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    
    printf("%d\n", sum);
    return 0;
}