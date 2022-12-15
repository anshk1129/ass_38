#include<bits/stdc++.h>
using namespace std;
int main(){
list<int> l1;
l1.push_front(10);
l1.push_back(20);
l1.push_back(30);
l1.push_back(40);
l1.push_back(50);
list<int>::reverse_iterator it;
for(it=l1.rbegin();it!=l1.rend();it++){
    cout<<*it<<" ";
}
return 0;
}