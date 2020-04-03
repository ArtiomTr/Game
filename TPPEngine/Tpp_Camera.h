#pragma once

#include "Tpp_Debuggable.h"
#include "Tpp_EntityController.h"
#include "Tpp_Game.h"

namespace tp {

	class Camera : public Entity {
		sf::RenderTarget* renderTarget;

	public:
		Camera(sf::RenderTarget* renderTarget);
		sf::RenderTarget* getRenderTarget();
	};

	class CameraController : public EntityController<Camera> {
	public:
		CameraController();

		void start(std::vector<Entity*> entities) override;

		void surfaceUpdate(std::vector<Entity*> entities) override;

		void deepUpdate(std::vector<Entity*> entities) override;
	};

}