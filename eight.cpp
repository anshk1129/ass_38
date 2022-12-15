#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>l1={10,20,10,30,30,10,100,50,10};
l1.remove(10);

list<int>::iterator it,it1;
it1=l1.begin();
it1++;it1++;it1++;
l1.erase(it1);
for(it=l1.begin();it!=l1.end();it++){
    cout<<*it<<"  ";
}
 return 0;
}