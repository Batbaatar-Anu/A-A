#include <stdio.h>

int partition(int a[], int f, int l) {
    int pivot = a[l];
    int i = (f - 1);

    for (int j = f; j < l; j++) {
        if (a[j] < pivot) {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[l];
    a[l] = temp;

    return i + 1;
}

void quicksort(int a[], int f, int l) {
    if (f >= l)
        return;

    int pivot_index = partition(a, f, l);
    quicksort(a, f, pivot_index - 1);
    quicksort(a, pivot_index + 1, l);
}

int main() {
    int a[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;

    quicksort(a, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

