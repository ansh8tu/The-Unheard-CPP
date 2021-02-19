#include<iostream>
#include<string>
using namespace std;

int main(){

    //you can also use char* name1;
    string name = "Michael";

    //make sure you add 0 as the null character which marks the end of string
    char nameUsingChar[7] = {'H', 'A', 'R', 'V', 'E', 'Y', 0};

    name = "Harvey";

    cout<<"Username : "<< name <<endl;
    
    string start = "";

    for(int i=0; i<7; i++){
        start += nameUsingChar[i];
    }

    cout<<"The name is : "<< start <<endl;

    //string methods
    cout<< "The size of name is : " << name.length() << endl;

}