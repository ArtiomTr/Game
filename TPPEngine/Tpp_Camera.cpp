#include "Tpp_Camera.h"

#include "iostream"

namespace tp {

	Camera::Camera(sf::RenderTarget* renderTarget)
		: renderTarget(renderTarget), Entity("camera") {
	}

	sf::RenderTarget* Camera::getRenderTarget() {
		return renderTarget;
	}

	CameraController::CameraController()
		: EntityController("camera", ControllerType::DEEP) {
	}

	void CameraController::surfaceUpdate(std::vector<Entity*> entities) {
	}

	void CameraController::start(std::vector<Entity*> entities) {
	}

	void CameraController::deepUpdate(std::vector<Entity*> entities) {
		for (int i = 0; i < entities.size(); i++) {
			Camera* camera = (Camera*) entities[i];

			Transform cameraTransform = camera->gameObject->transform;
			Vector2<float> cameraPosition = cameraTransform.position;

			sf::RenderTarget* target = camera->getRenderTarget();
			sf::RenderStates states = sf::RenderStates::Default;

			states.transform.rotate(cameraTransform.rotation.y)
				.translate(sf::Vector2f(cameraPosition.x, cameraPosition.y));

			target->clear();
			if (scene != NULL) {
				std::vector<Entity*> debuggables =
					scene->getEntitiesByName("debuggable");
				for (int j = 0; j < debuggables.size(); j++) {
					Debuggable* debuggable = (Debuggable*) debuggables[j];
					debuggable->draw(target, states);
				}
			}
		}
	}

}