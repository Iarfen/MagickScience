#include "units.hpp"

using namespace std;

namespace physics::units
{
	VECTOR_UNIT_CPP(electric_displacement_field,"A*s/m2");
	SCALAR_UNIT_CPP(electric_charge_density,"A*s/m3");
	SCALAR_UNIT_CPP(electric_current_density,"A/m2");
	VECTOR_UNIT_CPP(electric_field_strength,"kg*m/A*s3");
	SCALAR_UNIT_CPP(electron_mobility,"A*s2/kg");
}
