#include <iostream>
#include <string>
using namespace std;

// Function to find the kth smallest element in an array
int kthSmall(int k, int anArray[], int first_index, int last_index)
{
    // Calculate the index of the pivot element
    int pivotIndex = first_index + (last_index - first_index) / 2;

    // Calculate the size of the left subarray
    int sizeleft = pivotIndex - first_index;

    // Base case: If the subarray has only one element, return that element
    if (first_index == last_index)
    {
        return anArray[first_index];
    }
    // If k is less than or equal to the size of the left subarray, search in the left subarray
    else if (k <= sizeleft)
    {
        return kthSmall(k, anArray, first_index, pivotIndex - 1);
    }
    // If k is less than or equal to the size of the left subarray plus 1, return the pivot element
    else if (k <= sizeleft + 1)
    {
        return anArray[pivotIndex];
    }
    // If k is greater than the size of the left subarray plus 1, search in the right subarray
    else
    {
        return kthSmall(k - sizeleft - 1, anArray, pivotIndex + 1, last_index);
    }
}

int main()
{
    // Example array
    int anArray[] = {1, 5, 9, 7, 3, 7};

    // Find and print the 1st smallest element in the array
    cout << kthSmall(1, anArray, 0, 5) << endl;
    // Output should be 1

    return 0;
}