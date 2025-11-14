#include <iostream>

#include <GLFW/glfw3.h>


int main()
{
    if (glfwInit()) {
        std::cout << "GLFW initialization succeeded." << std::endl;
    } else {
        std::cout << "GLFW initialization failed." << std::endl;
        exit(EXIT_FAILURE);
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);

    GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
    if (window) {
        std::cout << "Window or OpenGL context creation succeeded." << std::endl;

        while (!glfwWindowShouldClose(window)) {
            glfwSwapBuffers(window);
            glfwPollEvents();
        }
    } else {
        std::cout << "Window or OpenGL context creation failed." << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    exit(EXIT_SUCCESS);
}
