#pragma once
#include <string>
#include <vector>
#include "SpriteBacth.h"

using namespace std;

const int TILE_WIDTH = 64;
class Level
{

private:
	vector<string> _levelData;
	int _numHumans;
	int _numZombies;
	void parseLevel();
public:
	glm::vec2 _playerPosition;
	glm::vec2 _posZombie;
	std::vector<glm::vec2> _zombiesPosition;

	glm::vec2 getPlayerPosition() const { 
		return _playerPosition; 
	};
	std::vector<glm::vec2> getZombiesPosition()const {
		return _zombiesPosition;
	};

	vector<string> getLevelData() const{
		return _levelData;
	}

	int getHeight() const{
		return _levelData[0].size();
	}

	int getWidth() const {
		return _levelData[0].size();
	}

	int getNumHums()const {
		return _numHumans;
	}

	int getNumZombies()const {
		return _numZombies;
	}

	Level(const std::string& fileName);
	void draw();
	SpriteBacth _spriteBatch;
	~Level();
};

