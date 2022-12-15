#include<bits/stdc++.h>
using namespace std;
int main(){
list<char>c;
for(char i='A';i<='Z';i++){
    c.push_back(i);
}
for(char x:c){
    cout<<x<<"  ";
}



    return 0;
}