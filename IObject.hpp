#pragma once
#include <SFML/Graphics.hpp>
#include "Tool.hpp"

class DataContainer;
class MapCase;

class IObject : public sf::Drawable
{
public:
	IObject(const std::string &);
	virtual ~IObject();
	virtual MapCase				*getCurrentCase() const;
	virtual void				findCase();
	virtual void				move(const sf::Vector2f & coord) = 0;

protected:
	virtual void				draw(sf::RenderTarget& target, sf::RenderStates states) const;

public:
	sf::Vector2f				_position;

protected:
	MapCase						*_currentCase;
	sf::Sprite					_character_sprite;
	sf::Texture					_texture_character;
	sf::Vector2f				_currentScale;
};

