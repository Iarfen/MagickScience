#ifndef CHEMISTRY_BIOCHEMISTRY_UNITS_HPP_INCLUDED
#define CHEMISTRY_BIOCHEMISTRY_UNITS_HPP_INCLUDED

#include "physics/basic/units/unit.hpp"
#include "physics/basic/units/scalar_unit.hpp"

using namespace std;
using namespace physics::units;

namespace physics::units
{
	class catalytic_efficiency : public scalar_unit_crtp<catalytic_efficiency>
	{
		public:
			using scalar_unit_crtp::scalar_unit_crtp;

			static const string dimensions_match;
	};
}

#endif // CHEMISTRY_BIOCHEMISTRY_UNITS_HPP_INCLUDED
