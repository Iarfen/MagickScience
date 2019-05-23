#ifndef PHYSICS_WAVES_RADIOMETRY_UNITS_HPP_INCLUDED
#define PHYSICS_WAVES_RADIOMETRY_UNITS_HPP_INCLUDED

#include "msci/units/units/scalar_unit.hpp"
#include "msci/units/units/vector_unit.hpp"

using namespace std;

namespace msci
{
	SCALAR_UNIT_HPP(radioactivity);
	VECTOR_UNIT_HPP(irradiance);
	VECTOR_UNIT_HPP(radiant_exposure);
	SCALAR_UNIT_HPP(radiant_intensity);
	SCALAR_UNIT_HPP(spectral_intensity);
	SCALAR_UNIT_HPP(radiance);
	SCALAR_UNIT_HPP(spectral_radiance);
	VECTOR_UNIT_HPP(radiant_flux);
	VECTOR_UNIT_HPP(spectral_flux);
}

#endif // PHYSICS_WAVES_RADIOMETRY_UNITS_HPP_INCLUDED
