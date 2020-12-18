#pragma once
#include "Actor.h"

class Bone : public Actor
{
public:

	//Create a bone with a starting position and a ending position
	Bone(Actor startFrame, Actor endFrame);
	~Bone() {}

	//Interpolate between starting frame and ending frame
	bool update(double deltaTime) override;
	//Draw each frame of animation
	bool draw() override;

private:

	//The actor at the start of the animation
	Actor m_startFrame;
	//The actor at the end of the animation
	Actor m_endFrame;
};

