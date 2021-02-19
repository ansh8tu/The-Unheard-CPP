#include<iostream>
using namespace std;

class Teacher{
    private:
        int basicSalary;
        int id;
        int deptId;
    protected:
        string areaOfSpec;
    public:
        virtual void setDeptId(int deptId){
            cout<<"The dept Id is : "<<deptId<<endl;
        }
};

class PhysicsTeacher : public Teacher{
    public: 
        //inherited the protected and public members and method while you still can't edit private ones 
         void setDeptId(int deptId) override {
            cout<<"The dept Id for physics is : "<<deptId<<endl;
        }

        void setAreaOfSpec(string areaOfSpec){
            cout<<"My are of Specialization is :"<<areaOfSpec<<endl;
        }
};

int main(){
    //you can only access public members & methods directly 
    Teacher *p, t1;
    t1.setDeptId(1001);
    PhysicsTeacher p1;
    p =&p1;
    p->setDeptId(1002);
    p1.setAreaOfSpec("Quantum Physics");
}