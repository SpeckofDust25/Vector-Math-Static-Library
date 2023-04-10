#pragma once
#include <cmath>


/* Right Handed Orientation:
*  Meaning Z is Forward, Y is Up and X is Right
*  All Axes are pointed in the positive direction
*/

namespace Orange {

	class Vector2D {

	public:
		static const Vector2D UP;
		static const Vector2D DOWN;
		static const Vector2D RIGHT;
		static const Vector2D LEFT;
		static const Vector2D ZERO;

	public:
		Vector2D(double x = 0, double y = 0);
		Vector2D(const Vector2D& vec);
		~Vector2D();

	public:
		double x, y;
	
		Vector2D operator=(const Vector2D& vec);
		Vector2D operator+(const Vector2D& vec);
		Vector2D operator-(const Vector2D& vec);
		Vector2D operator*(const Vector2D& vec);
		Vector2D operator/(const Vector2D& vec);

		double Magnitude();
		
		static double DotProduct(Vector2D vec1, Vector2D vec2);
		static double Magnitude(Vector2D vec1, Vector2D vec2);
		static Vector2D Normalize(Vector2D vec);
	};

	class Vector3D {

	public: 
		  static const Vector3D UP;
		  static const Vector3D DOWN;
		  static const Vector3D RIGHT;
		  static const Vector3D LEFT;
		  static const Vector3D FORWARD;
		  static const Vector3D BACKWARD;
		  static const Vector3D ZERO;

	public:
		Vector3D(double x = 0, double y = 0, double z = 0);
		Vector3D(const Vector3D& vec);
		~Vector3D();

	public:
		double x, y, z;

		Vector3D operator=(const Vector3D& vec);
		Vector3D operator+(const Vector3D& vec);
		Vector3D operator-(const Vector3D& vec);
		Vector3D operator*(const Vector3D& vec);
		Vector3D operator/(const Vector3D& vec);

		double Magnitude();
		static double DotProduct(Vector3D vec1, Vector3D vec2);
		static Vector3D CrossProduct(Vector3D vec1, Vector3D vec2);
		static double Magnitude(Vector3D vec1, Vector3D vec2);
		static Vector3D Normalize(Vector3D vec);
	};
}
