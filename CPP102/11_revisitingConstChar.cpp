#include<iostream>
using namespace std;


class Artist{
    public:
        //you can simply use string name;
        //but we'll get to that later, but const char* is just the same
        const char* name;
        int ratings;

        void popularityLevel(const char* level ){
            cout<<"Popularity Level : "<<level<<endl;
        }
};


int main(){

    Artist lauv;
    lauv.name = "Ari Lauv";
    lauv.ratings = 5;

    cout<<"The real name of the artist is : "<<lauv.name<<endl;
    cout<<"The ratings for the artist is : "<<lauv.ratings<<endl;
    lauv.popularityLevel("Legend");

}