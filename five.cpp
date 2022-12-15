#include<bits/stdc++.h>
using namespace std;
int main(){

  list<string>l1;
   l1.push_back("Hello ");
    l1.push_back("Ansh ");
     l1.push_back("How are you ");
      l1.push_back("Hope! you are fine ");
      list<string>::iterator it;
      for(it=l1.begin();it!=l1.end();it++){
         cout<<*it<<" ";
      }
    return 0;
}