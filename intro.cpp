#include <iostream>
using namespace std;
int main() {
   
       int m ;
       int mask=0;
          
          if (m==0){
            return 1;

          }
          while(m != 0){
            mask = (mask << 1) | 1;
              m= m>>1;
          }
         int ans = (~m)& mask;
          return ans;
    


    return 0;
}