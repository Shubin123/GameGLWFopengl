#include "player.h"



// to print
#include "iostream"
using namespace std;

// for timer
#include <chrono>
#include <thread>

using namespace this_thread;     // sleep_for, sleep_until
using namespace chrono_literals; // ns, us, ms, s, h, etc.
using chrono::system_clock;
using chrono::duration;


/// <summary>
///  decrementf takes float pointer and decrements
///  incrementf ...
///
///  toggleB toggle wether in game : use timer 
/// </summary>
/// <param name="f"></param>
void incrementf(float* f, float factor = 1) {
    *f += .1f * factor;
}
void decrementf(float* f, float factor = 1) {
    *f -= .1f * factor;
}
void toggleB(bool* b, duration<double> tsecs) {
    sleep_for(10ns);
    sleep_until(system_clock::now() + tsecs);
        if (*b) {
            *b = 0;
        }
        else {
            *b = 1;
        }
}



void processInput(GLFWwindow* window, float* z, float* x, float* y, bool* togglemouse) {

    // keyboard
    if (glfwGetKey(window, GLFW_KEY_W)) {
        cout << "w pressed" << endl;
        incrementf(z);
    }
    if (glfwGetKey(window, GLFW_KEY_S)) {
        cout << "s pressed" << endl;
        decrementf(z);
    }
    if (glfwGetKey(window, GLFW_KEY_A)) {
        cout << "a pressed" << endl;
        incrementf(x);
    }
    if (glfwGetKey(window, GLFW_KEY_D)) {
        cout << "d pressed" << endl;
        decrementf(x);
    }
    if (glfwGetKey(window, GLFW_KEY_SPACE)) {
        cout << "space pressed" <<  *y << endl;
        decrementf(y, 2);
    }
    if (glfwGetKey(window, GLFW_KEY_ESCAPE)) {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
    if (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT)) {
        toggleB(togglemouse, .1s);
        if (*togglemouse) {
            cout << "mouse hidden" << endl;
        }
        else {
            cout << "mouse shown" << endl;
        }
    }

}
