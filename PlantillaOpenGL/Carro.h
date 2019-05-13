#pragma once
#include "Modelo.h"
#include "glm/gtx/transform.hpp"
#include "glm/glm.hpp"

class Carro : public Modelo {
public:
	Carro();
	void avanzar();
	void rotar();
	vec3 getCoordenadas();
private: 
	vec3 coordenadas = vec3(0.0f, 0.0f, 0.0f);
	void actualizarMatrizModelo();
};