#include <raylib.h>
#include "PlayerInfo.h"

void handleInput(player* PLAYER) {
    if (IsKeyDown(KEY_LEFT_SHIFT)){
        PLAYER->wishSpeed = PLAYER->getSprintSpeed();
    }
    else PLAYER->wishSpeed = PLAYER->getWalkSpeed();

    if (PLAYER->x - PLAYER->wishSpeed < 20) {

    }else if (IsKeyDown(KEY_LEFT)){
        PLAYER->x -= PLAYER->wishSpeed;
    }

    if (PLAYER->x + PLAYER->wishSpeed > 1260) {

    }else if (IsKeyDown(KEY_RIGHT)){
        PLAYER->x += PLAYER->wishSpeed;
    }
    
    if (PLAYER->y + PLAYER->wishSpeed > 700){

    }else if (IsKeyDown(KEY_DOWN)){
        PLAYER->y += PLAYER->wishSpeed;
    }

    if (PLAYER->y - PLAYER->wishSpeed < 15){

    } else if(IsKeyDown(KEY_UP)){
        PLAYER->y -= PLAYER->wishSpeed;
    }
}
