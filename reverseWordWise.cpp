/*
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    int k = s1.length()-1;

    for(int i=0; i<s1.length()/2; i++){
        char temp = s1[i];
        s1[i] = s1[k];
        s1[k] = temp;
        k--;
    }

    for(int i=0; s1[i]!='\0'; i++){
        while (s1[i] != " "){
            
        }
    }

    cout<<s1<<endl;
}