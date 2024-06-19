#include<iostream>
using namespace std ;

void printArray(int arr[], int size){
   for (int i=0 ;i<size; i++){
    cout << arr[i]<< " " ;
   }
   cout << endl;
}

void sortOne(int arr[], int size){
    int s = 0;
    int left =0 , right =size-1;
    while(left<right){
    while (arr[left]== 0 && left <right){
        left ++;
            }
    while (arr[right] == 1 && left<right){
        right --;

    }
    if(arr[left]==1&& arr[right]== 0 && left<right){
     swap(arr[left], arr[right]);
     left ++;
     right --;}
}
}
int main(){
    int arr[6]= {1,0,0,1,0,1};

    sortOne(arr,6);
    printArray(arr,6);


}