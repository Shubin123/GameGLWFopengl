#pragma once
#include <GLFW/glfw3.h>
#include "rect.h"
void processInput(GLFWwindow* window, float* z, float* x, float* y, bool* togglemouse);
void incrementf(float* f, float factor);
