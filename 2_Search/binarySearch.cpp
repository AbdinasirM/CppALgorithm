#include <iostream>
#include <cmath>
using namespace std;

// Binary search function to find the target in a sorted array
int binarySearch(int anArr[], int arrSize, int target) {
    int low = 0;
    int high = arrSize;

    while (low <= high) { // Continue the search until the search space is empty
        int midpoint = floor(low + (high - low) / 2); // Calculate the midpoint of the current search space
        int value = anArr[midpoint]; // Get the value at the midpoint

        if (value == target) {
            return midpoint; // Return the index if the target is found
        } else if (value > target) {
            high = midpoint - 1; // Adjust the search space to the left half
        } else { // value < target
            low = midpoint + 1; // Adjust the search space to the right half
        }
    }

    return -1; // Return -1 if the target is not found
}

int main() {
    int anArr[] = {3, 4, 6, 9, 15, 32, 45};
    int arrSize = (sizeof(anArr) / sizeof(anArr[0])) - 1;

    int result = binarySearch(anArr, arrSize, 3);

    if (result != -1) {
        cout << "Element : " << result <<" is in the array" << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}
