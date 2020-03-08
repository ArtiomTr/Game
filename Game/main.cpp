#include <iostream>
#include <vector>

//#include <SFML/Graphics.hpp>

#include "Tpp_Game.h"

#include "Test_Entity.h"

using namespace tp;
using namespace std;

int main() {
	GameConfiguration configuration =
		GameConfiguration(Rect<int>(800, 600), "Game");
	Game g(configuration);
	vector<IEntityController*> controllers;
	controllers.push_back(new Test_Controller());
	Scene s(controllers);

	s.addGameObject(vector<Entity*>({ new Test_Entity(10) }),
		new GameObject(Transform(Vector2<float>(0, 0), Quaternion(),
			Vector2<float>(1, 1)),
			"New object 1"));
	s.addGameObject(vector<Entity*>({ new Test_Entity(20) }),
		new GameObject(Transform(Vector2<float>(0, 0), Quaternion(),
			Vector2<float>(1, 1)),
			"New object 2"));

	g.openScene(&s);

	g.Invoke();

	return EXIT_SUCCESS;
}