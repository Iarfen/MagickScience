#ifndef COORDINATES_ND_HPP_INCLUDED
#define COORDINATES_ND_HPP_INCLUDED

#include "math/topology/topology.hpp"

using namespace std;

namespace math
{
	class coordinates_nd
	{
		public:
			coordinates_nd();

			virtual space_type get_value() const = 0;
			virtual space_type n_projection(int) const = 0;
			virtual bool is_nd(int) const = 0;
			virtual int get_nd() const = 0;
	};
}

#endif // COORDINATES_ND_HPP_INCLUDED
