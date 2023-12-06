#include <iostream>
class B;

using namespace std;
class A{
public:
void showb(B);
};

class B{
int datab;
public:
void setb(){
  datab=500;}
friend void A::showb(B);
};

void A::showb(B x){
  cout<<"value of private data b is="<<x.datab;
}


int main() {
  A a;
  B b;
  b.setb();
  a.showb(b);
  return 0;
}