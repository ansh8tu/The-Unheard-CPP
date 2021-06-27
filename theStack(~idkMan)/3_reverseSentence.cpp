#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverseSentence(string sentence){
    stack<string> stackzy;

    for(int i=0; i<sentence.length(); i++){
        string word = "";
        while(sentence[i] != ' ' && i<sentence.length()){
            word = word + sentence[i];
            i++;
        }
        stackzy.push(word);
    }

    while(!stackzy.empty()){
        cout<<stackzy.top()<<" ";
        stackzy.pop();
    }
    cout<<endl;

}

int main(){
    string sentence;

    cout<<"Enter the sentence that you want reverse: "<<endl;
    getline(cin, sentence);

    reverseSentence(sentence);

}
