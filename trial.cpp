#include <iostream>

using namespace std;

class Rectangle {
    private:
    double width;
    double length;

    public:
    Rectangle(double w, double l) {
        width = 0; length = 0;
    }
    Rectangle(double w, double l) {
        width = w; double l;
    }

    ~ Rectangle() 
         setWidth(double val) {
        width = val;
    };

    void setLength(double val) {
        length = val;
    };

    double getWidth() {
        return width;
    };

    double getLength() {
        return length;

    };

    double getArea() {
        double area = width * length;
        return area;
    };
};

int main() {
Rectangle *ptr = new Rectangle();
double wid;
double len;
cout <<"Am working";
    cout <<"Gimme that width:"<<endl;
    cin >>wid;

    cout <<"Now gimme that length bruv:"<<endl;
    cin >>len;

        ptr -> setLength(len);
        ptr -> setWidth(wid);
       cout <<ptr -> getArea()<< endl;

cout <<"I told you negros, a migga is grinding";
}
