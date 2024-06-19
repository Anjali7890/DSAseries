#include<iostream>
using namespace std ;

bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;
    while (s<=e){
        if (a[s] != a[e]){
            return 0;
        }
        else {
            s++, e--;
        }
    }
    return 1;
}

void reverse(char name[],int n){
    int s=0;
    int e= n-1;
    while (s<e){
        swap (name[s++],name[e--]);
    }

}
int getLenght( char name[]){
    int count =0;
    for(int i=0; name[i] != '\0'; i++){
        count ++;
    }
   return count ;
}
  
int main(){
    char name[25];
    cout << "Enter your name" <<endl;
    cin>>name;

    cout << "MY NAME IS "<<" ";
    cout<< name<< endl;
    int len = getLenght (name);
    cout << "length " << len << endl;
     reverse(name ,len );
     cout <<"reverse name "<< endl;
     cout << name << endl;
     checkPalindrome (name ,len);
     cout << "Palindrome  or not:" << checkPalindrome (name ,len)<< endl; 
}