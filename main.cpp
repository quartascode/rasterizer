#include <raylib.h>

int main(void) {
	int width = 600;
	int height = 400;

	InitWindow(width, height, "rasterizer");
	SetTargetFPS(180);

	while (!WindowShouldClose()) {


		BeginDrawing();

		EndDrawing();
	}

	return 0;
}
