#include <iostream>

using namespace std;

class Shape{
public:
    string color;
    Shape(string color){
        this->color=color;
    }
    void calculateArea(){
        cout<<"Je calcule la surface";
    }
    void calculatePerimeter(){
        cout<<"Je calcule le perimetre";
    }
};

class Circle: public Shape{
public:
    float radius;
    Circle(string color, float radius) :Shape(color){
        this->color = color;
        this->radius = radius;
    }
    void calculateArea(){
        cout<<"Je calcule la surface du cercle";
    }
    void calculatePerimeter(){
        cout<<"Je calcule le perimetre du cercle";
    }
};


class Rectangle: public Shape{
public:
    float width;
    float height;
    Rectangle(string color, float width, float height):Shape(color){
        this->color = color;
        this->width = width;
        this->height = height;
    }
    void calculateArea(){
        cout<<"La surface du rectangle = "<<width*height;
    }
    void calculatePerimeter(){
        cout<<"Le perimetre du rectangle = "<<(width+height)*2;
    }

};



int main()
{
    Shape c1("Rouge");
    Circle c2("Rouge", 12);
    cout<<c2.color;
}
