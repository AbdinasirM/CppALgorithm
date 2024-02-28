#include <iostream>
#include <cmath>
using namespace std;

// Function to perform linear search in an array
int linearSearch(int anArr[], int arrSize, int target){
    for(int i = 0; i < arrSize; i++){ // Iterate through each element in the array
        if(anArr[i] == target){
            return anArr[i]; // Return the element if it matches the target
        }
    }
    return -1; // Return -1 if the target is not found in the array
}

int main(){
    int anArr[] = {3, 4, 6, 9, 15, 32, 45};
    int arrSize = (sizeof(anArr) / sizeof(anArr[0])) - 1; // Calculate the size of the array

    int result = linearSearch(anArr, arrSize, 3);

    if (result != -1) {
        cout << "Element : " << result <<" is in the array." << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}
