//to know whether a given character is a lower , upper or a numeric .
#include <iostream>
using namespace std;
int main() {
    char ch_1;
    cout<<"enter a character";
    cin>>ch_1;
    if(ch_1>=97&&ch_1<=122){
        cout<<"character"<<ch_1<<"is a lower case character";
    }
   else if(ch_1>=65&&ch_1<=90){
        cout<<"character"<<ch_1<<"is a upper case character";
    }
   else if(ch_1>=48&&ch_1<=57){
        cout<<"character"<<ch_1<<"is a numeric character";
    }
    else{
        cout<<"invalid";
    }

    return 0;
}