#include <iostream>

using namespace std;

int main()
{

    int m;
    cin >> m;

   int score[m];
   for(int i=0; i<m; i++)
   {
       cin>>score[i];
   }
   int max= score[0];
   int min =score[0];

   int mx = 0;
   int mn = 0;

   for(int i=1; i<m; i++){
       if(score[i]<min){
           min = score[i];
           mn++;
       }
       if(score[i]>max){
        max = score[i];
        mx++;
       }
   }
   cout<<mx<<" "<<mn<<endl;

    return 0;
}