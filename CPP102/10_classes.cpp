//structures and classes are almost similar only difference is that by default everything
//in class is private while evverything in structure is public 


#include<iostream>
using namespace std;

class Player{
    //by default everything inside the class is private so we need to make some stuff
    //public so that we can acces it 
    public:
        //properties/data members
        string name;
        int speed;
        int x,y;

        //methods/data functions 
         void movePlayer(int x, int y){
            x = x*speed;
            y = y*speed;
            cout<<"Player moved to : ("<<x<<", "<<y<<")"<<endl;
    }

};

int main(){

    //creating an instance of a class
    Player player1;

    //setting the properties of the player
    player1.x=1;
    player1.y=3;
    player1.speed = 10;

    //accessing the method 
    player1.movePlayer(2,3);

}