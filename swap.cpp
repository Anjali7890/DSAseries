#include<iostream>
using namespace std ;
 
      void printArray( int arr[], int size){

    for (int i=0;i<size ;i++){
        cout << arr[i] << " ";

    }
    cout << endl;
 }

 void swapAlternate( int arr[], int size){

    for (int i=0;i<size ;i=i+2){
        if (i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
 }

int main(){

    int even[6]= {2,10,5,6,8,4};
    int odd[8]= {6,7,33,9,54,8,3,1};

     swapAlternate(even,6);
     printArray(even,6);
     cout << endl;

     
     swapAlternate(odd,8);
     printArray(odd,8);
     cout << endl;


    return 0;
}