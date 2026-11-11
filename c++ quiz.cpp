#include <iostream>
using namespace std;

// Function to find the sum
int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}


long long findMultiplication(int arr[], int size) {
    long long mult = 1;
    for (int i = 0; i < size; i++) {
        mult = mult * arr[i];
    }
    return mult;
}


double findAverage(int arr[], int size) {
    int sum = findSum(arr, size);
    return (double)sum / size;
}


int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

//
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


int findRange(int arr[], int size) {
    return findMax(arr, size) - findMin(arr, size);
}


void printAll(int sum, long long mult, double avg, int min, int max, int range) {
    cout << "\n----- Results -----" << endl;
    cout << "Sum            = " << sum << endl;
    cout << "Multiplication = " << mult << endl;
    cout << "Average        = " << avg << endl;
    cout << "Minimum        = " << min << endl;
    cout << "Maximum        = " << max << endl;
    cout << "Range          = " << range << endl;
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    
    int sum = findSum(numbers, SIZE);
    long long mult = findMultiplication(numbers, SIZE);
    double avg = findAverage(numbers, SIZE);
    int min = findMin(numbers, SIZE);
    int max = findMax(numbers, SIZE);
    int range = findRange(numbers, SIZE);

    
    printAll(sum, mult, avg, min, max, range);

    return 0;
}
