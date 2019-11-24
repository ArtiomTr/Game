#include "Tpp_GameObject.h"

#include <iostream>

namespace tp {

	int GameObject::ID_COUNTER = 0;

	void GameObject::addNewEntity(int entity) {
		entities.push_back(entity);
	}

	GameObject::GameObject(Transform transform, std::string name) : 
		transform(transform),
		name(name),
		active(true),
		entities(),
		id(GameObject::ID_COUNTER++)
	{

	}

	bool GameObject::isActive() {
		return active;
	}

	std::string GameObject::getName() {
		return name;
	}

}