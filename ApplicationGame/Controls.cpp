#include <raylib.h>
#include "PlayerInfo.h"

void handleInput(player* PLAYER) {
    if (IsKeyDown(KEY_LEFT_SHIFT)){
        PLAYER->wishSpeed = PLAYER->sprintSpeed;
    }
    else PLAYER->wishSpeed = PLAYER->walkSpeed;

    if (IsKeyDown(KEY_LEFT)){
        PLAYER->x -= PLAYER->wishSpeed;
    }

    if (IsKeyDown(KEY_RIGHT)){
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
