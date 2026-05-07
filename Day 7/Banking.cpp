#include<iostream>
using namespace std;
// student class.
class Banking{
    public:
    string acc_name;
    int acc_no;
    int balance;

    Banking(){
        cout<<"default constructor called."<<endl;  //destructor
    }

    Banking(int a ){    //contructor
        cout<<a<<endl; 
    }
    Banking(string name , int no , int bal ){   //2ndconstructor /overloading
        acc_name=name;
        acc_no=no;
        balance=bal;
        cout<<acc_name<<" "<<acc_no<<" "<<balance<<endl; 
    }

    Banking(string acc_name, int acc_no, int balance ){   //this
        (*this).acc_name=acc_name;
        (*this).acc_no=acc_no;
        (*this).balance=balance;
        cout<<acc_name<<" "<<acc_no<<" "<<balance<<endl; 
    }


    void study(){
        cout<<acc_name<<" has balance "<<balance<<endl;
    }
};
int main(){
    Banking obj("sanjana",661,1000); 
}