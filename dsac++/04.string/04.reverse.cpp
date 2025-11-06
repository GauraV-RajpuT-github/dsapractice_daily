//brute o{n}
//better o{n/2
// optimal o{n}

#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];               
    }
    return 0;
};
// g++ -std=c++11 04.reverse.cpp && ./a.out