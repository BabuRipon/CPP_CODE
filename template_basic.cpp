#include<iostream>
using namespace std;

template<typename T , typename V>

class Pair{
    T x;
    V y;

    public:
    
    void setX(T x){
      this->x=x;
    }

    void setY(V y){
        this->y=y;
    }

    T getX(){
        return x;
    }

    V getY(){
        return this->y;
    }


};

int main(){
    // Pair<int,int> p;
    // p.setX(10);
    // p.setY(20);
    // cout<<p.getX()<<" "<<p.getY();

   Pair<Pair<int,double>,char> p;
   Pair<int,double> p2;

   p2.setX(10);
   p2.setY(5.33);

   p.setY('r');
   p.setX(p2);

   cout<<p.getX().getX()<<" "<<p.getX().getY()<<" "<<p.getY();

   return 0;
}