#include <iostream>
using namespace std;

int main(){
  
     int n;
     cin>>n;
    int ans[n+1];
    int count = 0;
     for(int i=0; i<=n; i++){
         
         while(n == 0 && n!=0){
             n = n& (n-1);
             count++;
         }

     }
     cout<<count<<endl;
     



    return 0;
}