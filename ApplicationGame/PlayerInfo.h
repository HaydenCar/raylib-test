#pragma once

class player {
private:
	
public:
	float radius = 20.f;
	int x = 400;
	int y = 700;
	const int walkSpeed = 3;
	const int sprintSpeed = 8;
	int wishSpeed = 3;
	float airTime = 0;
};

void handleInput(player* PLAYER);