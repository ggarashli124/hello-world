#include <stdio.h>
#include <stdlib.h>
// Pointers and Memory Allocation Playground
void find_max(int a[], int n, int *ptrmax){
    for(int i = 1; i < n; i++){
        if(a[i] > *ptrmax){
            *ptrmax = a[i];
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int)); // memory allocation for an array with n integers
    if(a == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int *ptrmax = &max;

    find_max(a, n, ptrmax);

    printf("%d\n", *ptrmax);

    // free allocated memory
    free(a);

    return 0;
}
