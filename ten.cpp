#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>l2={600,7000,8000,900,1100};
list<int>l1={1000,200,30000,400,500};
l2.merge(l1);
list<int>::iterator ll;
for(ll=l2.begin();ll!=l2.end();ll++)
{
    cout<<*ll<<"  ";
}

    return 0;
}