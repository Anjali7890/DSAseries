#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot =arr[s];

    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotIndex=cnt+s;
    swap(arr[pivotIndex],arr[s]);

    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i] <pivot){
            i++;
        }
        if(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}


void quickSort( int arr[], int s,int e){
    // base case
    if(s>= e){
        return ;
    }
     int p = partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int mian(){
    int arr[5]={2,6,5,7,1};
    int n=5;
    quickSort(arr , 0 , n-1);

    for(int i=0;i<n;i++ ){
    cout<<arr[i]<<endl;
}
    return 0;
}