#include "Zombie.h"

Zombie::Zombie() {
}
Zombie::~Zombie(){
}

void Zombie::init(glm::vec2 position)
{
	_color.set(0, 255, 0, 255); //verde
	//_color.set(255, 255, 0, 255); //amarillo

	_position = position;
}

void Zombie::update(const std::vector<std::string>& levelData) {
}



