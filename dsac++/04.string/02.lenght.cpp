#include<iostream>
using namespace std;
// int getlenght( string str){
//     int count = 0;
//     for(int i=0; str[i]!='\0'; i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     int lenght = getlenght(str);
//     cout<<"The lenght of the string is: "<<lenght<<endl;
//     return 0;
// }
int getlenght(char str[]){
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    int lenght = getlenght(str);
    cout<<"The lenght of the string is: "<<lenght<<endl;
    return 0;   
    
}