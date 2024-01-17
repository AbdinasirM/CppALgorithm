#include <iostream>
#include <string>
using namespace std;

/**
 * recursion has two cases:
    1. the first one is the base case: which is the case that you know about at the end when the recursion function ends
    2. the second one the recursion case: which is the case where the condition doesn't meet the first case and the recursion function will do operations and recall it self until it meets the requirements for the first case.
*/

// create a variable to store when the target number is found
// if the target is in the mid of the array
// else if the target number is in the first half of the array then save it into the variable targetFound if not then run the recursion function again
// else if the target number is in the second half of the array then save it into the variable targetFound if not then run the recursion function again
int binarySearch(int anArray[], int first_index, int last_index, int target)
{
    // create a variable to store when the target number is found
    int targetFound = 0;
    // let's say first_index was 0 and the last_index was 4
    int mid = first_index + (last_index - first_index) / 2;

    // the above variable mid is calculated like this: middle of the array is 0 plus (4 - 0) divided by 2 which equals 0 + 2 so middle index of the array is 2

    if (first_index > last_index)
    {
        targetFound = -1; // target is not in the original array
    }
    else
    {
        if (target == anArray[mid])
        {
            targetFound = mid;
        }
        else if (target < anArray[mid])
        {                                                                      // first half of the array
            targetFound = binarySearch(anArray, first_index, mid - 1, target); // passing the original array, middleIndex of the array - 1 which is the element that is on the left of the middleIndex of the array
        }
        else
        {                                                                     // the second half of the array
            targetFound = binarySearch(anArray, mid + 1, last_index, target); // passing the original array, middleIndex of the array + 1 which is the element that is on the right of the middleIndex of the array
        }
    }

    return targetFound;
}

int main()
{

    int anArray[] = {1, 5, 9, 7, 3, 7};

    // The last parameter should be the index of the last element (size - 1)
    cout << binarySearch(anArray, 0, 5, 9) << endl;

    return 0;
};