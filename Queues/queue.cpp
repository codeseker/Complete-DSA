#include <iostream>
#include <queue>
using namespace std;



int main(){

     queue<int> q;

     q.push(10);
     q.push(12);
     q.push(20);
     q.push(89);

     cout<<"size of queue is: "<<q.size()<<endl;

     cout<<"front element is: "<<q.front()<<endl;
     cout<<"back element is: "<<q.back()<<endl;

     // pop front se hoga push back se hoga
     q.pop();
     cout<<"front element is: "<<q.front()<<endl;
     q.push(90);
     cout<<"back element is: "<<q.back()<<endl;

     if(q.empty())
     {
         cout<<"queue is empty"<<endl;
     }
     else{
         cout<<"Not empty"<<endl;
     }





    return 0;
}