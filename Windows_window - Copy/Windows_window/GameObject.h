#pragma once

#include <typeinfo>
#include <unordered_map>

#include "Component.h"

class GameObject
{
public:
	GameObject();
	~GameObject();

	template < typename T > ;
	Component* getComponent();

private:

	using ComponentMap = std::unordered_map<const std::type_info*, Component>;

	ComponentMap _components;
};

