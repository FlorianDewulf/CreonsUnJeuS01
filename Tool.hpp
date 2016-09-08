#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>

#define SIZE_TILE_X 100
#define SIZE_TILE_Y 100
#define RESIZE_TILE_X 1
#define RESIZE_TILE_Y 0.55f
#define ROTATION_TILE 45

#define M_PI 3.14159265358979323846

namespace Tool
{
	// Coord translation
	sf::Vector2f toWindowCoord(const float &x, const float &y, const bool with_transformation = false);
	sf::Vector2f toDataCoord(const float &x, const float &y, const short &width_case, const short &height_case);

	// Angle conversion
	float toDegree(const float &);
	float toRad(const float &);

	// Calculate
	sf::Vector2f calcSizeAfterRotation(const float &, const float &, const float &);
	float calcWidthAfterRotation(const float &, const float &, const float &);
	float calcHeightAfterRotation(const float &, const float &, const float &);
};