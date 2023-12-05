#pragma once

#include <string>

#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include "gl_object.hpp"

struct TextureFormat
{
    int width;
    int height;
};

class Texture : public GLObject
{
public:
    Texture(const void *data, int width, int height);
    ~Texture();

    void Bind();
    void Unbind();
};