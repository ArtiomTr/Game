#pragma once

#include "Tpp_EntityController.h"

namespace tp {

	class Camera : public Entity {};

	class CameraController : public EntityController<Camera> {};

}