
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

// The NOGDI below is needed to prevent Windows from including wingdi.h which has a duplicate
// declaration of 'Polygon' and throws ambiguous error.
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#define NOGDI
#endif

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities

//------------------------------------------------------------------------------

int main()
{
    using namespace Graph_lib;   // our graphics facilities are in Graph_lib

    Point tl(100,100);           // to become top left  corner of window

    Simple_window win(tl,600,400,"Canvas");    // make a simple window

    Polygon poly;                // make a shape (a polygon)

    poly.add(Point(300,200));    // add a point
    poly.add(Point(350,100));    // add another point
    poly.add(Point(400,200));    // add a third point 

    poly.set_color(Color::red);  // adjust properties of poly

    Text t(Point(150,50), "Hello World of HY150! ");
    t.set_font(Graph_lib::Font::times_bold);
    t.set_font_size(20);

    win.attach(t);
    
    win.attach (poly);           // connect poly to the window

    win.wait_for_button();       // give control to the display engine
}

class Pixel(){
        private:
            int positionx;
            int positiony;
            vec3 color;
        public:
            int get_positionx(){    //getters
                return positionx;
            }
            int get_positiony(){
                return positiony;
            }
            vec3 get_color(){
                return color;
            }
            void set_positionx(int new_posx){   //setters
                positionx = new_posx;
            }
            void set_positiony(int new_posy){
                positiony = new_posy;
            }
            void set_color(vec3 new_col){
                color = new_col;
            }
            Pixel(int posx, int posy, vec3 col){
                Pixel(int x, int y, vec3 col) : positionx(x), positiony(y), color(col) {}
            }
    };

    class ImageData(){
        private:
            Vector<vector<Pixel>> Image;
            int width;
            int height;
        public:
            Vector<vector<Pixel>> get_img(){    //getters
                return Image;
            }
            int get_wid(){
                return width;
            }
            int get_hei(){
                return height;
            }
            void set_img(Vector<vector<Pixel>> img){    //setters
                Image = img;
            }
            void set_wid(int wid){
                width = wid;
            }
            void set_hei(int hei){
                hei = height;
            }
    
    };
    //constructor den exei

    Point tr(100,100);
    Simple_window win(tr,ImageData.get_wid()*20+70,ImageData.get_hei()*20,"window");    //"window" should be ppm image name

}

//------------------------------------------------------------------------------
