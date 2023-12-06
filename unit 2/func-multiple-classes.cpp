#include<iostream>
class A;
class B;

using namespace std;

class A{
    int adata;
    public:
    void setadata(){
        adata=5;
    }
    friend void min(A,B);
};

class B{
    int bdata;
    public:
    void setbdata(){
        bdata=6;
    }
    friend void min(A,B);
};

void min(A x,B y){
    x.adata>y.bdata?cout<<"Largest is: "<<x.adata:cout<<"Largest is: "<<y.bdata;
}

int main(){
    A a;
    B b;
    a.setadata();
    b.setbdata();
    min(a,b);
    return 0;
}