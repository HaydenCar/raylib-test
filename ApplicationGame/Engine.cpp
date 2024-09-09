#include <raylib.h>
#include "PlayerInfo.h"
#include "Camera.h"
#include "Map.h"

player PLAYER; 
Camera camera = { 0 };


void engineRun () {
    Image imgTexture = LoadImage("Textures/textures.png"); 
    Texture2D texture = LoadTextureFromImage(imgTexture); 
    UnloadImage(imgTexture); 

    Model model = LoadModelFromMesh(GenMeshCube(1.0f, 1.0f, 1.0f)); 
    model.materials[0].maps[MATERIAL_MAP_DIFFUSE].texture = texture;

    createCamera(&camera);
    
    
    while (WindowShouldClose() == false) {
        handleInput(&PLAYER);

        BeginDrawing();
        ClearBackground(RAYWHITE);

        UpdateCamera(&camera, cameraMode);

        BeginMode3D(camera);
        drawMap();
        DrawCube(Vector3{ camera.target.x,camera.target.y,camera.target.z }, 0.5f, 1.5f, 0.5f, PURPLE);
        DrawModel(model, { 0.0f, 2.0f, 0.0f }, 1.f, WHITE);
        DrawCubeWires(camera.target, 0.5f, 0.5f, 0.5f, DARKPURPLE);
        EndMode3D();

        //DrawCircle(PLAYER.x, PLAYER.y, PLAYER.getRadius(), WHITE); 

        DrawText(TextFormat("- Position: (%06.3f, %06.3f, %06.3f)", camera.position.x, camera.position.y, camera.position.z), 610, 60, 10, BLACK);
        DrawText(TextFormat("- Target: (%06.3f, %06.3f, %06.3f)", camera.target.x, camera.target.y, camera.target.z), 610, 75, 10, BLACK);
        DrawText(TextFormat("- Up: (%06.3f, %06.3f, %06.3f)", camera.up.x, camera.up.y, camera.up.z), 610, 90, 10, BLACK);

        DrawFPS(10, 10);
        EndDrawing();
    }

    
}

