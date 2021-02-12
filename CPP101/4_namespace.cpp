#include<iostream>

namespace firstNamespace{
    void name(){
        std::cout<<"Hello I am from the first namespace";
    }

    void sum(int a, int b){
        int sum =a +b;
        std::cout<<"The sum from first namespace is : "<<sum<<std::endl;
    }
}

namespace secondNamespace{
    void name(){
        std::cout<<"Hello I am from the second namespace";
    }

    void sum(int a, int b){
        int sum =a +b;
        std::cout<<"The sum from second namespace is : "<<sum<<std::endl;
    }
}

int main(){
    firstNamespace::name();
    std::cout<<" "<<std::endl;
    secondNamespace::name();

    std::cout<<" "<<std::endl;

    firstNamespace::sum(2,5);
    secondNamespace::sum(2,5);
}