#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,20,30,40,50,60,1,2,3,4,5,6};
list<int>l1;
l1.assign(arr,arr+5);
list<int>::iterator itr;
for(itr=l1.begin();itr!=l1.end();itr++){
    cout<<*itr<<"  ";
}

return 0;
}