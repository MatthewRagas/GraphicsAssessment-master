#pragma once
#include "Actor.h"
#include "Bone.h"
#include <vector>

class Skeleton : public Actor
{
public:

	//Array of bones for animation
	Skeleton();
	~Skeleton() {}

	bool update(double deltaTime) override;
	bool draw() override;

	void addBone(Bone* bone);

private:

	//Vector of bones
	std::vector<Bone*> m_bones;
};

