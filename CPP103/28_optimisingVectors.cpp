#include<iostream>
#include<vector>
using namespace std;

class Box{
    public:
        int length, breadth, hieght;
    public:
        Box(){}
        Box(int length, int breadth, int hieght) : length(0), breadth(0), hieght(0){
            this->length = length;
            this->breadth = breadth;
            this->hieght = hieght;
        }

};

ostream& operator<<(ostream& myOut, vector<Box> &boxOne){

    for(int i=0; i<boxOne.size(); i++){
        cout<<"Dimensions of Box "<< i << " : Length: " <<boxOne.at(i).length<<" Breadth: "<<boxOne.at(i).breadth<<
        " Hieght: "<<boxOne.at(i).hieght<<endl;
    }
    return myOut;
}

int main(){
    vector<Box> boxOne;

    
    //also the size issue can be optimised if we know how may elements we want to insert 
    boxOne.reserve(4);

    //push back creates a copy rather we can optimise it by using emplace_back
    boxOne.push_back({10,20,30});
    boxOne.push_back({10,10,30});

    //no copy created in this case 
    boxOne.emplace_back(Box(10,20,30));

    

    cout<<boxOne<<endl;

}