#include<bits/stdc++.h>
using namespace std;
string gcdStrings(string str1, string str2){
    if(str1 + str2 != str2+str1) return "";
    return str2.substr(0,__gcd(str1.size(),str2.size()));
}
int main(){
    cout<<gcdStrings("ababab","abab");
}