#include<iostream>
#include<math.h>

using namespace std;
class Point{
    int x , y;
    friend void distBtwPoints(Point , Point);
    public:
    Point(int a , int b){
        x = a;
        y = b;
    }

    void displayPoint(){
        cout<<"The value of point x  is "<<x <<" and y is "<<y <<endl;
    }
    
};

void distBtwPoints(Point p1 , Point p2){
        double dx = p1.x - p2.x;
        double dy = p1.y - p2.y;

        double d = sqrt( dx*dx + dy*dy);
        cout<<"the distance btw the points is "<<d<<endl;
}
int main(){
    Point p(1, 1);
    p.displayPoint();
    
    Point q(1 , 1);
    q.displayPoint();

    distBtwPoints( p , q);

    return 0;
}