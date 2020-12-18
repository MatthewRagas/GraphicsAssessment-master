#pragma once
#include <gl_core_4_4.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <Gizmos.h>
#include <Texture.h>
#include "OBJMesh.h"
#include "Shader.h"
#include "Mesh.h"
#include "Light.h"
#include "Bone.h"
#include "Skeleton.h"
#include "Earth.h"
#include <vector>

class Camera;

class Game
{
public:
	Game();
	Game(int width, int height, const char* title);
	~Game();

	//Run the program
	int run();

	//Returns true if programs successfully starts
	bool start();
	//Returns true if the game updates successfully
	bool update(double deltaTime);
	//Return if the game drew successfully
	bool draw();
	//Returns if the game ended successfully
	bool end();

	//Returns a reference to the window
	GLFWwindow* getWindow() { return m_window; }
	//Returns the window's width
	int getWidth() { return m_width; }
	//Returns the window's height
	int getHeight() { return m_height; }
	//Returns the window's title
	const char* getTitle() { return m_title; }

protected:
	//The programs window
	GLFWwindow*	m_window;
	//The game's camera
	Camera*		m_camera;

	//The program's shader
	aie::ShaderProgram	m_shader;

	//The first and second light
	Light m_light;
	Light m_light2;

	//Spear mesh
	aie::OBJMesh		m_objMesh;

	//Spear transform
	glm::mat4			m_meshTransform;

	//Not Rendered
	Earth* m_earth;

	//Not Rendered
	Mesh				m_mesh;
	//Not Rendered
	aie::Texture		m_texture;

	//Not Rendered
	Bone*		m_hipBone;
	//Not Rendered
	Bone*		m_kneeBone;
	//Not Rendered
	Bone*		m_ankleBone;
	//Not Rendered
	Skeleton*	m_skeleton;


private:
	//Width, height, and title of the window
	int m_width, m_height;
	const char* m_title;
	
};

