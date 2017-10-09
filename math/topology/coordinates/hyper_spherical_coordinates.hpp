#ifndef HYPER_SPHERICAL_COORDINATES_HPP_INCLUDED
#define HYPER_SPHERICAL_COORDINATES_HPP_INCLUDED

#include "math/number/angle_number.hpp"
#include "coordinates_nd.hpp"
#include "coordinates_3d.hpp"
#include "math/topology/direction.hpp"

#include "boost/variant.hpp"

#include <list>

using namespace std;

namespace msci
{
	class hyper_spherical_coordinates : public coordinates_nd
	{
		public:
			hyper_spherical_coordinates();
			hyper_spherical_coordinates(function<space_type()>);
			hyper_spherical_coordinates(function<space_type()>, direction_symbol);
			hyper_spherical_coordinates(function<space_type()>, angle_type);
			hyper_spherical_coordinates(function<space_type()>, angle_type, angle_type);
			hyper_spherical_coordinates(function<space_type()>, msci::angle_container);
			hyper_spherical_coordinates(function<space_type()>, boost::variant<msci::angle_container,direction_symbol>);

			inline space_type get_r() const
			{
				return r();
			}

			const msci::angle_number& get_angle1() const;
			const msci::angle_number& get_angle2() const;
			const msci::angle_number& get_angle(unsigned int) const;
			const angle_container& get_angles() const;

			inline const direction_symbol& get_direction() const
			{
				return directions.direction.get_direction();
			}

			virtual space_type get_value() const;
			virtual space_type n_projection(unsigned int) const;
			virtual bool is_nd(unsigned int) const;
			virtual int get_nd() const;

			const bool& is_1d() const;
			bool is_2d() const;
			bool is_3d() const;

			space_type x_projection() const;
			space_type y_projection() const;
			space_type z_projection() const;

			void invert();
			void rotate1(angle_type);
			void rotate2(angle_type);
			void rotate(int, angle_type);

			void convert_cartesian_2d(space_type, space_type);
			void convert_polar(space_type, const msci::angle_number&);
			void convert_cartesian_3d(space_type, space_type, space_type);
			void convert_cylindrical(space_type, const msci::angle_number&, space_type);

		protected:
			function<space_type()> r;
			union directions_union
			{
				angle_container angles;
				direction_lr direction;
				directions_union(const angle_container& x) : angles(x) {}
				~directions_union() {}
			} directions;
			bool unidimensional;
	};
}

#endif // HYPER_SPHERICAL_COORDINATES_HPP_INCLUDED
