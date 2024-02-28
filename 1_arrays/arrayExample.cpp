#include <iostream>
#include <vector>
using namespace std;

int main(){



    //take user input for the dynamic array:
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    
    //static  array:
    int myarray[5];

    //ading elements to the array
    for(int i= 0;i<5;i++){
        myarray[i] = i;
        cout<<"Static Array: "<<myarray[i]<<endl;
    }



    //dynamic array:
    vector<int> myvector;
    for(int i=0;i<num;i++){
        myvector.push_back(i);
        cout<<"Dynamic array: "<<myvector[i]<<endl;
    }

//



    return 0;
}