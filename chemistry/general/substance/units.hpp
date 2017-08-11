#ifndef CHEMISTRY_GENERAL_SUBSTANCE_UNITS_HPP_INCLUDED
#define CHEMISTRY_GENERAL_SUBSTANCE_UNITS_HPP_INCLUDED

#include "physics/basic/units/scalar_unit.hpp"

using namespace std;
using namespace physics::units;

namespace physics::units
{
	SCALAR_UNIT_HPP(molarity);
	SCALAR_UNIT_HPP(molality);
	SCALAR_UNIT_HPP(linear_mass_density);
	SCALAR_UNIT_HPP(area_density);
	SCALAR_UNIT_HPP(dynamic_viscosity);
	SCALAR_UNIT_HPP(mass_flow_rate);
}

#endif // CHEMISTRY_GENERAL_SUBSTANCE_UNITS_HPP_INCLUDED
