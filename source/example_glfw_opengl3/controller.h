#pragma once
#include <GLFW/glfw3.h>

using namespace std;
#include <iostream>
#include "rect.h"

void cameraController(GLFWwindow* window, float* playerxx, float* playeryy, float* playerzz, float* playerrotxx, float* playerrotyy, float* playerrotzz, double  mousex, double mousey);
