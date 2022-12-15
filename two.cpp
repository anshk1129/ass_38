#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>l1,l2,l3;
list<int>::iterator it,it1;
//first way
l1.assign(5,100);
for(it=l1.begin();it!=l1.end();it++){
cout<<*it<<" ";
}
cout<<endl;
it1=l1.begin();
it1--;
it1--;
l2.assign(l1.begin(),it1);
for(it=l2.begin();it!=l2.end();it++){
cout<<*it<<" ";
}
int arr[]={10,20,30,40};
l3.assign(arr,arr+3);
cout<<endl;
for(it=l3.begin();it!=l3.end();it++){
cout<<*it<<" ";
}
    return 0;
}