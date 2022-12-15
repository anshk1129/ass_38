#include<bits/stdc++.h>
using namespace std;
int main(){
list<int> l1,l2;
l1.push_front(10);
l1.push_front(20);
l1.push_front(380);
l1.push_front(50);
l2.push_front(5);
l2.push_front(5);
l2.push_front(5);
l1.push_back(5);
l1.push_back(1000);
l1.push_back(2000);
l2.push_back(5);
l2.push_back(15);
l2.push_back(5);
list<int>::iterator iter;
l1.unique();
for(iter=l1.begin();iter!=l1.end();iter++){
cout<<*iter<<" ";
}
cout<<endl;
iter=l2.begin();
iter++;
l2.erase(iter);
for(iter=l2.begin();iter!=l2.end();iter++){
cout<<*iter<<" ";
}
l2.merge(l1);
cout<<endl;
for(iter=l2.begin();iter!=l2.end();iter++){
cout<<*iter<<" ";
}
l1.assign(5,100);
cout<<endl;
for(iter=l1.begin();iter!=l1.end();iter++){
cout<<*iter<<" ";
}


    return 0;
}