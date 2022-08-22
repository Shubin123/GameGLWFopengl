#pragma once
#pragma once
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <stdio.h>
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <GLES2/gl2.h>
#endif
#include <GLFW/glfw3.h> // Will drag system OpenGL headers

   
void drawRect();
void display(GLFWwindow* window, float floater, float playerz, float playerx, float playery, float playerrotx, float playerroty, float playerrotz, double mousex, double mousey);

