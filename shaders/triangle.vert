#version 410 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;

out vec3 ourColor;

uniform float offset;

void main()
{
    gl_Position = vec4(aPos.x + offset, aPos.y, aPos.z, 1.0);
    ourColor = vec3(aPos.x + offset + 0.5, aPos.y + offset + 0.5, aPos.z + offset + 0.5);
}