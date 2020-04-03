#include <iostream>
#include <vector>

#include "Tpp_Game.h"

#include "Test_Entity.h"
#include "Tpp_Camera.h"
#include "Tpp_Debuggable.h"

using namespace tp;
using namespace std;

int main() {
	GameConfiguration configuration =
		GameConfiguration(Rect<int>(800, 600), "Game", true);
	vector<IEntityController*> controllers;
	controllers.push_back(new Test_Controller());
	controllers.push_back(new CameraController());

	Game game(configuration);

	Scene* defaultScene = new Scene(controllers);

	defaultScene->addGameObject(vector<Entity*>({ new Camera(game.getRenderWindow()) }),
		new GameObject(Transform(Vector2<float>(100, 50), Quaternion(),
			Vector2<float>(1, 1)),
			"New object 1"));

	defaultScene->addGameObject(vector<Entity*>({ new DebugRect(Rect<float>(50, 50)) }),
		new GameObject(Transform(Vector2<float>(100, 200), Quaternion(),
			Vector2<float>(1, 1)),
			"New object 2"));

	defaultScene->addGameObject(vector<Entity*>({ new DebugRect(Rect<float>(50, 50)) }),
		new GameObject(Transform(Vector2<float>(0, 0), Quaternion(),
			Vector2<float>(1, 1)),
			"New object 3"));

	game.getSceneManager()->addScene(defaultScene);
	game.getSceneManager()->loadScene(0);
	game.Invoke();

	return EXIT_SUCCESS;
}