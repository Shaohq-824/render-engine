//
// Created by Krisu on 2019-12-29.
//

#ifndef RENDER_ENGINE_RENDERER_HPP
#define RENDER_ENGINE_RENDERER_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <type_traits>

#include "IO.hpp"


/*
 * Renderer encapsulates OpenGL loader, OpenGL API and main window
 * It's a middle layer between OpenGL API and the Render core, i.e., a
 * platform-independent layer
 *
 * Each Renderer is a window.
 */

class Renderer {
public:
    Renderer();
    ~Renderer();

    Renderer(Renderer const&) = delete;
    Renderer& operator=(Renderer const&) = delete;

    void SetVsync(bool on);

    void SetMSAA(int samples);

    bool ShouldEnd();

    double GetDeltaTime() const;

    void InitializeOpenGL();

    void ResetViewport();;

    std::pair<int, int> GetWindowSize() const;

    void Close();

    void UpdateBeforeRendering();

    void UpdateAfterRendering();

private:
    GLFWwindow *window = nullptr;

    friend class GUI;
};



#endif //RENDER_ENGINE_RENDERER_HPP
