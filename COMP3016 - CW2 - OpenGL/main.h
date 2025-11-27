#pragma once

#include <GLFW/glfw3.h>
#include <learnopengl/shader_m.h>


//Called on window resize
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
//Processes user input on a particular window
void ProcessUserInput(GLFWwindow* WindowIn);

void mouse_callback(GLFWwindow* window, double xpos, double ypos);

//Sets the model-view-projection matrix
void SetMatrices(Shader& ShaderProgramIn);

GLuint program;