#include <iostream>
#include <iterator>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int i=0,value=0;
        unordered_map<char,int>mp; 
        mp['I']=1,mp['V']=5,mp['X']=10,mp['L']=50,mp['C']=100,mp['D']=500,mp['M']=1000;     
        while(i<s.length()){
            if(i<s.length()-1 && mp[s[i]] < mp[s[i+1]]){
                value+=mp[s[i+1]]-mp[s[i]];
                i=i+2;
            }
            else{
                value+=mp[s[i]];
                i++;
            }
        }
       return value; 
    }
}s1;

int main(){
    string s; cin >> s;
    s1.romanToInt(s);
    return 0;
}
