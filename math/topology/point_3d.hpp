#ifndef MATH_TOPOLOGY_POINT_3D_HPP_INCLUDED
#define MATH_TOPOLOGY_POINT_3D_HPP_INCLUDED

#include "topology.hpp"

using namespace std;

namespace math
{
	class point_3d
	{
		public:
			point_3d(space_type,space_type,space_type);

			inline space_type get_x() const
			{
				return x;
			}

			inline space_type get_y() const
			{
				return y;
			}

			inline space_type get_z() const
			{
				return z;
			}

			space_type distance_to_origin() const;

		private:
			space_type x;
			space_type y;
			space_type z;
	};

	space_type distance(point_3d,point_3d);
}

#endif // MATH_TOPOLOGY_POINT_3D_HPP_INCLUDED
