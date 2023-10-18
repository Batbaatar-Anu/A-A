 #include <stdio.h>

void heapify(int a[], int k, int n) {
    int larger_index = k;
    int left = 2 * k + 1;
    int right = 2 * k + 2;

    if (left < n && a[left] > a[larger_index]) {
        larger_index = left;
    }

    if (right < n && a[right] > a[larger_index]) {
        larger_index = right;
    }

    if (larger_index != k) {
        int temp = a[k];
        a[k] = a[larger_index];
        a[larger_index] = temp;
        heapify(a, larger_index, n);
    }
}

void heapsort(int a[], int n) {
    // Build a max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, i, n);
    }

    // Extract elements one by one
    for (int i = n - 1; i > 0; i--) {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a, 0, i);
    }
}

int main() {
    int a[] = {2, 7, -4, 1, 50, 23};
    int n = 6;

    heapsort(a, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

