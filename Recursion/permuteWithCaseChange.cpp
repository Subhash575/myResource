#include<iostream>
#include<vector>
using namespace std;

void permute(vector<string>&v, string ip, string op){

    if(ip.size() == 0){
        v.push_back(op);
        return;
    }

    string op1 = op;
    string op2 = op;
    op1.push_back(ip[0]);
    op2.push_back(ip[0]-32);
    ip.erase(ip.begin() + 0);

    permute(v, ip, op1);
    permute(v, ip, op2);
    return;
}

int main(){
    string s = "db";
    string op = "";
    vector<string>v;
    permute(v, s, op);
    for(auto it : v){
        cout << it <<", ";
    }
  
   return 0;
}

//pt to solve this problem is relate the difference between ASCII value which is
//constant
//Similarly we can use this for uppercase string(main).