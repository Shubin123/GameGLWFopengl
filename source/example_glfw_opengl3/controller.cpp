#include "controller.h"
#include "math.h"
const GLdouble pi = 3.1415926535897932384626433832795;




void cameraController(GLFWwindow* window, float* playerxx, float* playeryy, float* playerzz, float* playerrotxx, float* playerrotyy, float* playerrotzz, double  mousex, double mousey) {

        GLint windowWidth, windowHeight;
        glfwGetWindowSize(window, &windowWidth, &windowHeight); // static midpoint
        glfwGetCursorPos(window, &mousex, &mousey); // slight offset cause mouse has been toggled to midpoint

        
        float deltax = (mousex - windowWidth / 2);
        float deltay = -(mousey - windowHeight / 2);

        if (abs(deltax) < 0.01) {
            deltax = 0;
        }
        if (abs(deltay) < 0.01) {
            deltay = 0;
        }





        // cout << deltax << "x:y" << deltay << endl;
        float playerx = *playerxx;
        float playery = *playeryy;
        float playerz = *playerzz;

        *playerrotxx  =  deltax/5 + *playerrotxx;
        *playerrotyy  =  deltax/5 + *playerrotyy;
        // *playerrotzz  +=  mouse;


        float playerrotx = *playerrotxx;
        float playerroty = *playerrotyy;
        float playerrotz = *playerrotzz;

        if (playerrotx > 0 && playerrotx < 720) {
            glRotatef(playerrotx, playerx, playerrotx + playery, playerz);
            //glRotatef(playerroty, playerroty, playerrotx, 0);

        }
        else if (playerrotx < 0 || playerrotx >= 720) {
            *playerrotxx = 360;
        }

        cout << deltax << "dx:x" << playerrotx;
        cout << deltay << "dy:y" << playerroty << endl;
        //if (playerroty > 0 && playerroty < 400) {
            
        //}

        


        //glRotatef(playerroty, playerx, playery, playerz);

        glTranslatef(playerx, playery, playerz);
        glfwSetCursorPos(window, windowWidth / 2, windowHeight / 2); // min x and min y



    
    
}
