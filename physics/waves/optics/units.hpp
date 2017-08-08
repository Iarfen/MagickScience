#ifndef PHYSICS_OPTICS_UNITS_HPP_INCLUDED
#define PHYSICS_OPTICS_UNITS_HPP_INCLUDED

#include "physics/basic/units/unit.hpp"
#include "physics/basic/units/scalar_unit.hpp"
#include "physics/basic/units/vector_unit.hpp"

using namespace std;

namespace physics::units
{
	class optical_power : public scalar_unit_crtp<optical_power>
	{
		public:
			using scalar_unit_crtp::scalar_unit_crtp;

			static const string dimensions_match;
	};

	class luminance : public scalar_unit_crtp<luminance>
	{
		public:
			using scalar_unit_crtp::scalar_unit_crtp;

			static const string dimensions_match;
	};

	class luminous_energy : public scalar_unit_crtp<luminous_energy>
	{
		public:
			using scalar_unit_crtp::scalar_unit_crtp;

			static const string dimensions_match;
	};

	class luminous_exposure : public scalar_unit_crtp<luminous_exposure>
	{
		public:
			using scalar_unit_crtp::scalar_unit_crtp;

			static const string dimensions_match;
	};

	class luminous_efficacy : public scalar_unit_crtp<luminous_efficacy>
	{
		public:
			using scalar_unit_crtp::scalar_unit_crtp;

			static const string dimensions_match;
	};

	class ionizing_radiation : public scalar_unit_crtp<ionizing_radiation>
	{
		public:
			using scalar_unit_crtp::scalar_unit_crtp;

			static const string dimensions_match;
	};

	class absorbed_dose : public scalar_unit_crtp<absorbed_dose>
	{
		public:
			using scalar_unit_crtp::scalar_unit_crtp;

			static const string dimensions_match;
	};
}

#endif // PHYSICS_OPTICS_UNITS_HPP_INCLUDED
