#ifndef DIRECTIONAL_COORDINATES_HPP_INCLUDED
#define DIRECTIONAL_COORDINATES_HPP_INCLUDED

#include "msci/units/coordinates/coordinates_1d.hpp"
#include "msci/units/topology/direction.hpp"

#include <functional>

using namespace std;

namespace msci
{
	class directional_coordinates : public coordinates_1d
	{
		public:
			directional_coordinates();
			directional_coordinates(function<space_type()>,direction_symbol = right);

			virtual const space_type x_projection() const;
			virtual space_type get_value() const;

		private:
			function<space_type()> r;
			direction_lr direction;
	};
}

#endif // DIRECTIONAL_COORDINATES_HPP_INCLUDED
