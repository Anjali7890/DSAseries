#include<iostream>
using namespace std;
  void update( int arr[], int n){
    cout << " Inside the function " << endl ;
     
     arr[0]= 5;   

    for ( int i = 0 ; i<n ; i++){
        cout << arr[i]<< " ";
    }
     cout << endl ;
    cout << " going back to main function " << endl;
  }


int main(){
    int arr[3] = { 2 , 3 , 4};

    update(arr,3);

cout << " printing the main function"<< endl ;
    for (int i=0 ; i<3; i++){
        cout << arr[i]<< " ";
    }

    return 0 ;
}
