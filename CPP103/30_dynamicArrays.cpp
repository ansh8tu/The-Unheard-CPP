/*
    POV: I started this repository long back when i was in my sem-3 totally lost, didn't even knew how to write a single line of code, but here i am in my sem-7
    and i feel pretty confident now! This shows all you need is some time, give yourself some time and practice everyday and you will reach new hieghts. Remember 
    Confidence is the Key! 

    Coming back to the point, so like the topic for today is dynamic arrays and trust me i've been lost all over my college life for this topic, i used to see videos on
    youtube with people using int array[size] and it worked for them but when i tried it always gave me error! I used to get so angry and look out for some videos in order
    to fix my VSCode and compiler! 

    But the thing is there is no way it will work, but why? So, the thing with arrays is that whenver you want to use and array you need to mention the size while declaring it,
    okay but why, the answer is that during the compile time your compiler needs to allocate contiguous memory blocks to your array and for that it needs to know the size. Okay,
    then i will do it everytime! :(

    But what if I told you that there is something that you can use in order to make this thing work, intresting no? So, in order to make this thing work in C++, you can make
    use of the new keyword! Let's hop into the code and see how it works!

    GOODBYE TILL THE NEXT TIME!
    ~ansh

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arraySize;
    cin >> arraySize;

    //int myArray[arraySize];

    // expression must have a constant valueC/C++(28)
    // the value of variable "arraySize" (declared at line 24) cannot be used as a constant
    // the above two lines proove that this won't work so now lets find a fix!

    int *myArray = new int[arraySize];
    //boom this works and this is the fix

    //testing it out
    for(int i=0; i<arraySize; i++){
        cout << "Arr["<<i<<"]: ";
        cin>>myArray[i];
    }

    for(int i=0; i<arraySize; i++){
        //the below is same as  cout << myArray[i] << " ";
        //it's just that get used to the below one, and i would like you to explore it as a homework
        cout << *(myArray + i) << " ";
    }
}

