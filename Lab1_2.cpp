#include <iostream>
#include <string>

using namespace std ;
int main (){
    string input;
    cout<<"Enter expresion"<<endl;
    cin>> input;
    int count =0;
    cout<<"oparation found"<<endl;
    for (int i=0;i<input.length();i++){
            char ch=input[i];
    if(ch=='+'||ch=='-'||ch=='*'||ch=='+'||ch=='='||ch=='/'){
        count++;
        cout<< "Oparation"<<count<<": "<<ch<<endl;
    }
    }
    if (count ==0)
        cout<< "no expression"<<endl;
    return 0;

}
