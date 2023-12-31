#include <stdio.h>

int rLookupAr(int ar[], int n, int target);

int main() {
    int a[80];
    int target, i, size;

    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter %d numbers: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    printf("Enter target number: ");
    scanf("%d", &target);
    printf("rLookupAr(): %d", rLookupAr(a, size, target));
    return 0;
}

int rLookupAr(int ar[], int n, int target) {
    /* write your code here */
    if (ar[0] == target) {
        if (n == 0)
            return -1;
        else
            return 0;
    } else
        return 1 + rLookupAr(ar + 1, n - 1, target);
}