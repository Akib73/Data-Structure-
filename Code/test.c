#include <stdio.h>


int countDuplicateElements(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    return count;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);


    int arr[size];


    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    int duplicateCount = countDuplicateElements(arr, size);


    printf("Number of duplicate elements: %d\n", duplicateCount);

    return 0;
}
