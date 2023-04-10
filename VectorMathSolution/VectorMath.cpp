#include "VectorMath.h"

namespace Orange {

	//Vector2D Definitions
	Vector2D::Vector2D(double x, double y): x(x), y(y) {}
	
	Vector2D::Vector2D(const Vector2D& vec) {
		x = vec.x;
		y = vec.y;
	}

	Vector2D::~Vector2D() { }

	double Vector2D::Magnitude() {
		return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
	}

	double Vector2D::DotProduct(Vector2D vec1, Vector2D vec2) {
		return (vec1.x * vec2.x) + (vec1.y * vec2.y);
	}

	double Vector2D::Magnitude(Vector2D vec1, Vector2D vec2) {
		return std::sqrt(std::pow(vec2.x - vec1.x, 2) + std::pow(vec2.y - vec1.y, 2));
	}

	Vector2D Vector2D::Normalize(Vector2D vec) {
		double length = vec.Magnitude();
		Vector2D normalized_vector = Vector2D::ZERO;

		if (length != 0) {
			normalized_vector = vec / Vector2D(length, length);
		}

		return normalized_vector;
	}

	Vector2D Vector2D::operator=(const Vector2D& vec) {
		if (this != &vec) {
			x = vec.x;
			y = vec.y;
		}

		return *this;
	}

	Vector2D Vector2D::operator+(const Vector2D& vec) {
		if (this != &vec) {
			x += vec.x;
			y += vec.y;
		}

		return *this;
	}

	Vector2D Vector2D::operator-(const Vector2D& vec) {
		if (this != &vec) {
			x -= vec.x;
			y -= vec.y;
		}

		return *this;
	}

	Vector2D Vector2D::operator*(const Vector2D& vec) {
		if (this != &vec) {
			x *= vec.x;
			y *= vec.y;
		}

		return *this;
	}

	Vector2D Vector2D::operator/(const Vector2D& vec) {
		if (x != 0 && vec.x != 0) {
			x /= vec.x;
		} else {
			x = 0;
		}

		if (y != 0 && vec.y != 0) {
			y /= vec.y;
		} else {
			y = 0;
		}

		return *this;
	}
	

	//2D Const Values
	const Vector2D Vector2D::UP = Vector2D(0, 1);
	const Vector2D Vector2D::DOWN = Vector2D(0, -1);
	const Vector2D Vector2D::RIGHT = Vector2D(1, 0);
	const Vector2D Vector2D::LEFT = Vector2D(-1, 0);
	const Vector2D Vector2D::ZERO = Vector2D(0, 0);

	//Vector3D Definitions
	Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}
	
	Vector3D::Vector3D(const Vector3D& vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	Vector3D::~Vector3D() { }

	double Vector3D::Magnitude() {
		return std::sqrt(std::pow(x, 2) + std::pow(y, 2) + std::pow(z, 2));
	}

	double Vector3D::DotProduct(Vector3D vec1, Vector3D vec2) {
		return (vec1.x * vec2.x) + (vec1.y * vec2.y) + (vec1.z * vec2.z);
	}

	Vector3D Vector3D::CrossProduct(Vector3D vec1, Vector3D vec2) {
		return Vector3D((vec1.y * vec2.z) - (vec1.z * vec2.y), (vec1.z * vec2.x) - (vec1.x * vec2.z), (vec1.x * vec2.y) - (vec1.y * vec2.x));
	}

	double Vector3D::Magnitude(Vector3D vec1, Vector3D vec2) {
		return std::sqrt(std::pow(vec2.x - vec1.x, 2) + std::pow(vec2.y - vec1.y, 2) + std::pow(vec2.z - vec1.z, 2));
	}

	Vector3D Vector3D::Normalize(Vector3D vec) {
		double length = vec.Magnitude();
		Vector3D normalized_vector = Vector3D::ZERO;

		if (length != 0) {
			normalized_vector = vec / Vector3D(length, length, length);
		}

		return normalized_vector;
	}

	Vector3D Vector3D::operator=(const Vector3D& vec) {
		if (this != &vec) {
			x = vec.x;
			y = vec.y;
			z = vec.z;
		}

		return *this;
	}

	Vector3D Vector3D::operator+(const Vector3D& vec) {
		if (this != &vec) {
			x += vec.x;
			y += vec.y;
			z += vec.z;
		}

		return *this;
	}

	Vector3D Vector3D::operator-(const Vector3D& vec) {
		if (this != &vec) {
			x -= vec.x;
			y -= vec.y;
			z -= vec.z;
		}

		return *this;
	}

	Vector3D Vector3D::operator*(const Vector3D& vec) {
		if (this != &vec) {
			x *= vec.x;
			y *= vec.y;
			z *= vec.z;
		}

		return *this;
	}

	Vector3D Vector3D::operator/(const Vector3D& vec) {
		if (this != &vec) {
			if (x != 0 && vec.x != 0) {
				x /= vec.x;
			} else {
				x = 0;
			}

			if (y != 0 && vec.y != 0) {
				y /= vec.y;
			} else {
				y = 0;
			}

			if (z != 0 && vec.z != 0) {
				z /= vec.z;
			} else {
				z = 0;
			}
		}

		return *this;
	}

	//3D Const Values
	const Vector3D Vector3D::UP = Vector3D(0, 1, 0);
	const Vector3D Vector3D::DOWN = Vector3D(0, -1, 0);
	const Vector3D Vector3D::RIGHT = Vector3D(1, 0, 0);
	const Vector3D Vector3D::LEFT = Vector3D(-1, 0, 0);
	const Vector3D Vector3D::FORWARD = Vector3D(0, 0, 1);
	const Vector3D Vector3D::BACKWARD = Vector3D(0, 0, -1);
	const Vector3D Vector3D::ZERO = Vector3D(0, 0, 0);
}