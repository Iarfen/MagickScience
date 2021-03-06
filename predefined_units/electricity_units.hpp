#ifndef PHYSICS_ELECTROMAGNETISM_ELECTRICITY_UNITS_HPP_INCLUDED
#define PHYSICS_ELECTROMAGNETISM_ELECTRICITY_UNITS_HPP_INCLUDED

#include "msci/units/units/scalar_unit.hpp"
#include "msci/units/units/vector_unit_3d.hpp"

using namespace std;

namespace msci
{
	SCALAR_UNIT_HPP(electric_current);
	SCALAR_UNIT_HPP(voltage);
	VECTOR_UNIT_HPP(electric_displacement_field);
	SCALAR_UNIT_HPP(electric_charge_density);
	SCALAR_UNIT_HPP(electric_current_density);
	VECTOR_UNIT_HPP(electric_field_strength);
	SCALAR_UNIT_HPP(electron_mobility);
	SCALAR_UNIT_HPP(inductance);
}

#endif // PHYSICS_ELECTROMAGNETISM_ELECTRICITY_UNITS_HPP_INCLUDED
