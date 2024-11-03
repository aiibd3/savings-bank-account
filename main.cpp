#include <iostream>
//#include <algorithm>


using namespace std;

void insertion(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int secondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }

    }
    return secondLargest;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}


int main() {
    int arr[] = {4, 3, 6, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);


    cout << "Original array : ";
    print(arr, size);

    insertion(arr, size);

    cout << "\n sorted array : ";
    print(arr, size);

    int sec = secondLargest(arr, size);
    cout << "\n the second Largest : " << sec;

    bubbleSort(arr, size);

    cout << "\n bubble Sorted array: ";
    print(arr, size);


    return 0;
}