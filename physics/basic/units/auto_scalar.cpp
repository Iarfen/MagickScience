#include "auto_scalar.hpp"

using namespace std;

namespace physics::units
{
	auto_scalar::auto_scalar(math::topology::space_type new_value, string dimension_structure) : unit(new_value,dimension_structure),auto_unit(new_value,dimension_structure),scalar_unit(new_value,dimension_structure)
	{
	}

	auto_scalar::auto_scalar(const unit& new_value) : unit(new_value),auto_unit(new_value),scalar_unit(new_value)
	{
	}

	auto_scalar::auto_scalar(const unit& new_value,string init_value) : unit(new_value,init_value),auto_unit(new_value,init_value),scalar_unit(new_value,init_value)
	{
	}

	auto_scalar::auto_scalar(string init_value) : unit(init_value),auto_unit(init_value),scalar_unit(init_value)
	{
	}

	auto_scalar::auto_scalar(const auto_unit& x) : unit(x),auto_unit(x),scalar_unit(x)
	{
	}

	auto_scalar& auto_scalar::operator =(const auto_unit& x)
	{
		value = x.get_value();
		actual_dimensions = x.get_actual_dimensions();
	}

	auto_scalar& auto_scalar::operator =(auto_unit&& x)
	{
		value = move(x.get_value());
		actual_dimensions = move(x.get_actual_dimensions());
	}

	auto_scalar& auto_scalar::operator =(const unit& x)
	{
		value = x.get_value();
		actual_dimensions = x.get_actual_dimensions();
	}
}
