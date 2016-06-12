#include <stdio.h>


int main(int argc, char *argv[])
{
    int dummy = 0;
    int old_val = 0;
    int i = 0;
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%ld, %ld\n", &old_val - &i, &i - arr);

    for (i = 0; i <= 5; i++) {
        old_val = arr[i];
        arr[i] = 0;
        printf("arr[%d]: %d -> %d\n", i, old_val, arr[i]);
    }

    return 0;
}
