#include <iostream>
#include <cstring>  


void MySortString(char *arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            char *temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    char *arr[] = {
        (char*)"un",
        (char*)"deux",
        (char*)"trois",
        (char*)"quatre",
        (char*)"cinq",
        (char*)"six",
        (char*)"sept",
    };

    int size = sizeof(arr) / sizeof(arr[0]);

    MySortString(arr, size);

    std::cout << "  array sort :" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}
