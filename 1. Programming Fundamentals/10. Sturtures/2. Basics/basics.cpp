#include<iostream>
using namespace std;

struct Ball
{
    float x,y;
    float speedx,speedy;
    float radius;

    void speed(){
        cout<<"The speed of ball is ="<<x<<y;

    }

};

int main(){

    struct Ball ball;
    ball.x=300;
    ball.y=300;
    ball.radius=5;
    ball.speed();


}
