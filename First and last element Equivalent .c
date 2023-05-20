#include <stdio.h>

int check(int arr[], int n);

int main() {
    int i, arr[11], n = 11;

    for (i = 0; i <= n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    int status = check(arr, n);

    if (status)
        printf("YES");
    else
        printf("NO");

    return 0;
}

int check(int arr[], int n) {
    int i;

    for (i = 0; i <= n; i++) {
        if (arr[0] == arr[n - i - 1])
            return 1;
    }

    return 0;
}