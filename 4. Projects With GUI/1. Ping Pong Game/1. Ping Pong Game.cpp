#include "raylib.h"

struct Ball
{
    float x, y;
    float radius;
    float speedX, speedY;
    void Draw() {
        DrawCircle((int)x, (int)y, radius, WHITE);
    }
};

struct Paddle
{
    float x, y;
    float speed;
    float width, height;

    Rectangle GetRect()
    {
        return Rectangle{ x - width / 2,y - height / 2,width,height };
    }

    void Draw() {
        DrawRectangleRec(GetRect(), WHITE);
    }
};

int main()
{
    InitWindow(800, 600, "Pong");
    SetWindowState(FLAG_VSYNC_HINT);

    Ball ball;
    ball.x = GetScreenWidth() / 2.0f;
    ball.y = GetScreenHeight() / 2.0f;
    ball.radius = 5;
    ball.speedX = 300;
    ball.speedY = 300;

    Paddle leftPaddle;
    leftPaddle.x = 50;
    leftPaddle.y = GetScreenHeight() / 2;
    leftPaddle.speed = 500;
    leftPaddle.width = 10;
    leftPaddle.height = 100;

    Paddle rightPaddle;
    rightPaddle.x = GetScreenWidth() - 50;
    rightPaddle.y = GetScreenHeight() / 2;
    rightPaddle.speed = 500;
    rightPaddle.width = 10;
    rightPaddle.height = 100;

    const char* winnertext =nullptr ;

    while (!WindowShouldClose())
    {
        
        
        if (ball.y < 0) {
            ball.y = 0; //Because the Get Frame Time is not constant,game can stuck
            ball.speedY *= -1;
        }

        if (ball.y > GetScreenHeight()) {
            ball.y = GetScreenHeight();
            ball.speedY *= -1;
        }
        
        //moving the paddles:
        if (IsKeyDown(KEY_W))
        {
            leftPaddle.y -= leftPaddle.speed * GetFrameTime();

        }
        if (IsKeyDown(KEY_S))
        {
            leftPaddle.y += leftPaddle.speed * GetFrameTime();

        }
        if (IsKeyDown(KEY_UP))
        {
            rightPaddle.y -= rightPaddle.speed * GetFrameTime();

        }
        if (IsKeyDown(KEY_DOWN))
        {
            rightPaddle.y += rightPaddle.speed * GetFrameTime();

        }

        Rectangle leftPaddleRect = leftPaddle.GetRect();
        Rectangle rightPaddleRect = rightPaddle.GetRect();
        if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.radius, rightPaddle.GetRect()))
        {
            if (ball.speedY < 0) {
                ball.speedX *= -1;
            }
        }
        if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.radius, leftPaddle.GetRect()))
        {
            if (ball.speedY > 0) {
                ball.speedX *= -1;
            }
        }
        ball.x += ball.speedX * GetFrameTime();
        ball.y += ball.speedY * GetFrameTime();

        if (ball.x < 0) {
            winnertext = "Right Player Won!!";

        }
        if (ball.x > GetScreenWidth()) {
            winnertext = "Left Player Won!!";
        }
        if (winnertext && IsKeyPressed(KEY_SPACE)) {
            ball.x = GetScreenWidth() / 2.0f;
            ball.y = GetScreenHeight() / 2.0f;
            ball.radius = 5;
            ball.speedX = 300;
            ball.speedY = 300;
            winnertext = nullptr;
        }




        BeginDrawing();
        ClearBackground(BLACK);

        ball.Draw();
        leftPaddle.Draw();
        rightPaddle.Draw();
        if (winnertext) {
            int textwidth = MeasureText(winnertext, 60);
            DrawText(winnertext, GetScreenWidth()/2 - textwidth/2, GetScreenHeight() / 2 - 30, 60, RED);
        }
        DrawFPS(10, 10);
        EndDrawing();
    }
    

    CloseWindow();

    return 0;
}

