#include <iostream>
using namespace std;


int  bubbleSort(int anArray[], int size){

    for(int i=0; i<size; ++i){
        for(int j=0; j<size - 1 - i; ++j){
            //if int left index is greater than int right index
                //swap left item to the right index and right item to the left
            if(anArray[j] > anArray[j+1]){
                //manually swap left and right
                // int temp = anArray[j];
                // anArray[j] = anArray[j+1];
                // anArray[i+1] = temp;

                //swap left and right with the swap method bultin
                swap(anArray[j], anArray[j+1]); 
              
            }
        }
        
    };

    return false;

};


int main() {
    int anArray[7] = {7, 6, 5, 4, 3, 2, 1}; // Reverse order for better demonstration
    int size = sizeof(anArray) / sizeof(anArray[0]);

    //sort the array
    bubbleSort(anArray, size);

   for (int i = 0; i < size; ++i) {
        cout << anArray[i] << " ";
    }
    cout << endl;
    
    return 0;
}

