#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>l1;
l1.push_back(10);
l1.push_front(30);
l1.push_back(40);
l1.push_front(50);
l1.push_back(60);
l1.push_front(70);
l1.push_back(80);
l1.push_front(90);
cout<<"First element is "<<l1.front()<<endl;
cout<<"Last element is "<<l1.back()<<endl;
    return 0;
}