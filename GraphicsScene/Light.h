#pragma once
#include "Actor.h"

class Light
{
public:

	//Return and set m_direction
	glm::vec3 getDirection() { return m_direction; }
	void setDirection(glm::vec3 direction) { m_direction = direction; }

	//Return and set m_ambient
	glm::vec3 getAmbient() { return m_ambient; }
	void setAmbient(glm::vec3 ambient) { m_ambient = ambient; }

	//Return and set m_diffuse
	glm::vec3 getDiffuse() { return m_diffuse; }
	void setDiffuse(glm::vec3 diffuse) { m_diffuse = diffuse; }

	//Return and set m_specular
	glm::vec3 getSpecular() { return m_specular; }
	void setSpecular(glm::vec3 specular) { m_specular = specular; }

private:

	//The direction the light is facing
	glm::vec3 m_direction;
	//The amount the light will spread from its hit point
	glm::vec3 m_ambient;
	//Affects how a light reflects off a surface
	glm::vec3 m_diffuse;
	//Affects how a light reflects off a surface and where the view is
	glm::vec3 m_specular;
};

