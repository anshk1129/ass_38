#include<bits/stdc++.h>
using namespace std;
int main(){
list<char>c;
for(char i='A';i<='Z';i++){
    c.push_back(i);

}
list<char>::const_iterator it;
for(it=c.begin();it!=c.end();it++){
    cout<<*it<<"   ";
}



    return 0;
}