#include<bits/stdc++.h>
using namespace std;
void dis(list<int>l2){
list<int>::iterator i;
for(i=l2.begin();i!=l2.end();i++){
    cout<<*i<<"  ";
}
cout<<endl;
}
int main(){
list<int>l1={10,20,30,30,40,40,40,50,10,60,60};
cout<<"Before deleting consecutive element the list looks like "<<endl;
dis(l1);
cout<<"After deleting consecutive element the list looks like "<<endl;
l1.unique();
dis(l1);
    return 0;
}