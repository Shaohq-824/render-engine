//
// Created by Krisu on 2020/3/13.
//

#ifndef RENDER_ENGINE_DIRECTIONALSHADOW_HPP
#define RENDER_ENGINE_DIRECTIONALSHADOW_HPP

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <Light.hpp>

#include "Shadow.hpp"

class DirectionalShadow : public Shadow {
public:
    explicit DirectionalShadow(int map_width=1024, int map_height=1024);

    void GenerateShadowMap(glm::vec3 position, glm::vec3 direction,
                           float cone_in_degree) override;

    ~DirectionalShadow() override;

public:
    unsigned depthMapFBO = 0;
    unsigned depthMap = 0;
    const int width, height;

    glm::mat4 lightSpaceTransform;
};


#endif //RENDER_ENGINE_DIRECTIONALSHADOW_HPP
