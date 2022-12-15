#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>l2={600,7000,8000,900,1100};
list<int>l1;
l1.assign(l2.begin(),l2.end());
list<int>::iterator ll;
for(ll=l1.begin();ll!=l1.end();ll++)
{
    cout<<*ll<<"  ";
}



    return 0;
}