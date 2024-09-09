#pragma once

class player {
private:
	float radius = 20.f;
	const int walkSpeed = 3;
	const int sprintSpeed = 8;
public:
	float getRadius() {
		return radius;
	}
	int getWalkSpeed() {
		return walkSpeed;
	}
	int getSprintSpeed() {
		return sprintSpeed;
	}

	int wishSpeed = 3;

	int x = 400;
	int y = 700;
	
	float airTime = 0;
};

void handleInput(player* PLAYER);