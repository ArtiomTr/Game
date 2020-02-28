#pragma once

#include <string>
#include <vector>

#include "Tpp_Transform.h"

namespace tp {

	class GameObject {
	private:
		static int ID_COUNTER;

		Transform transform;
		std::vector<int> entities;
		std::string name;
		bool active;
		int id;

	public:
		GameObject(Transform transform, std::string name);
		void addNewEntity(int entity);
		std::string getName();
		bool isActive();
	};

}