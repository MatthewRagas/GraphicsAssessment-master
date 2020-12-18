#pragma once
#include "Game.h"
#include "Actor.h"

class Camera : public Actor
{
public:
	Camera(Game* instance) { m_instance = instance; }
	~Camera() {}

	//Return the location the camera will start to project
	glm::mat4 getViewMatrix();
	//Gets the area that the camera is looking at
	glm::mat4 getProjectionMatrix(float width, float height);

	//Get and set Yaw of camera
	float getYaw();
	void setYaw(float degrees);

	//Get and set pitch of camera
	float getPitch();
	void setPitch(float degrees);

	//Allow camera movement through user input
	bool update(double deltaTime) override;

private:

	//Reference to the scene the camera is looking at
	Game* m_instance;

	//theta and phi
	float m_yaw = 0.0f; 
	float m_pitch = 0.0f; 

	//Rate camera moves and turns
	float m_moveSpeed = 10.0f;
	float m_turnSpeed = 0.04f;

	//Used to store mouse x and y positions
	double m_currentMouseX = 0.0;
	double m_currentMouseY = 0.0;

	//Used to compare current mouse x and y positions to previouse positions on previous update
	double m_previousMouseX = 0.0;
	double m_previousMouseY = 0.0;
};

