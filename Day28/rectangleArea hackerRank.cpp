// Question Link-->https://www.hackerrank.com/challenges/rectangle-area/problem?isFullScreen=true

#include <iostream>

using namespace std;
 
class Rectangle{
    public:
        int l , b;
    public:
        void read_input(void){
            cin >> l >> b;
        }
        void display(void) {
            cout << l << ' ' << b << endl;
        }
};
class RectangleArea : public Rectangle{
    public:
        void display(void) {
            cout << l * b << endl; 
        }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}