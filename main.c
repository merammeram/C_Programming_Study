#include <stdio.h>

// Recursive Linear Search Function
// Searches for a number in an array recursively.
// Returns the index if found, -1 if not found.
int linearSearch(int n, int array[], int number, int index) {
    if (index == n) {
        return -1; // Number not found
    }
    if (array[index] == number) {
        return index; // Number found at current index
    }
    return linearSearch(n, array, number, index + 1); // Recursive call
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    int number;
    printf("Enter the number to search: ");
    scanf("%d", &number);

    int result = linearSearch(n, array, number, 0);

    if (result == -1) {
        printf("Number not found in the array.\n");
    } else {
        printf("Number found at index %d.\n", result);
    }

    return 0;
}
