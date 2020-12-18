#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>

class Actor
{
public:
	Actor() {}
	Actor(glm::vec3 position, glm::quat rotation, glm::vec3 scale = { 1.0f, 1.0f, 1.0f });
	~Actor() {}

	//Starts the actor
	virtual bool start() { return true; }
	//Updates the actor
	virtual bool update(double deltaTime) { return true; }
	//Draws the actor
	virtual bool draw() { return true; }
	//Deletes the actor
	virtual bool end() { return true; }

	//Return m_position
	glm::vec3 getPosition() { return m_position; }
	//Set m_position
	void setPosition(glm::vec3 position) { m_position = position; }
	//Return m_rotation
	glm::quat getRotation() { return m_rotation; }
	//Set m_rotation 
	void setRotation(glm::quat rotation) { m_rotation = rotation; }
	//Return m_scale
	glm::vec3 getScale() { return m_scale; }
	//Set m_scale
	void setScale(glm::vec3 scale) { m_scale = scale; }
	//Return the transform
	glm::mat4 getTransform();

	//Return the actor's parent
	Actor* getParent() { return m_parent; }
	//Set the actor's parent
	void setParent(Actor* parent) { m_parent = parent; }

	//Return parent position and rotation
	glm::vec3 getParentPosition();
	glm::quat getParentRotation();

protected:

	//Actor's position, rotation, and scale
	glm::vec3 m_position{ 0.0f, 0.0f, 0.0f };
	glm::quat m_rotation{ 1.0f, 0.0f, 0.0f, 0.0f };
	glm::vec3 m_scale{ 1.0f, 1.0f, 1.0f };

private:
	//Actor's parent
	Actor* m_parent = nullptr;
};

