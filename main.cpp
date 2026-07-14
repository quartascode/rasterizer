#include <cmath>
#include <raylib.h>

struct Vec2 {
	float x;
	float y;
};

struct Vec3 {
	float x;
	float y;
	float z;
};

Vec2 ProjectToPlane(const Vec3& v, float d) {
	float x = d * v.x / v.z;
	float y = d * v.y / v.z;

	return {x, y};
}

Vec2 ProjectToScreen(const Vec2& v, float scale, int width, int height) {
	float x =  v.x * scale + width  / 2.0f;
	float y = -v.y * scale + height / 2.0f;

	return {x, y};
}

int main(void) {
	float aspectRatio = 16/9.0f;

	float vFov = 60.0f * PI / 180.0f;

	float planeHeight = 2.0f;
	float planeWidth = planeHeight * aspectRatio;

	float d = planeHeight / (2.0f * tan(vFov / 2.0f));

	int height = 400;
	int width = height * aspectRatio;

	float pixelsPerUnit = height / planeHeight;

	InitWindow(width, height, "rasterizer");
	SetTargetFPS(180);

	

	while (!WindowShouldClose()) {


		BeginDrawing();
		EndDrawing();
	}

	return 0;
}
