#pragma once
#include "Agent.h"

class Zombie :public Agent
{
public:
	Zombie();
	~Zombie();
	public:
	void init(glm::vec2 position);
	void update(const std::vector<std::string>& levelData);
};

