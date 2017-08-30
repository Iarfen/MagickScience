#ifndef SCALAR_UNIT_HPP_INCLUDED
#define SCALAR_UNIT_HPP_INCLUDED

#include "unit.hpp"
#include "auto_unit.hpp"

#include <type_traits>

#define SCALAR_UNIT_HPP_BEGIN(name) class name : public scalar_unit_crtp<name> \
	{	\
		public: \
			explicit name(math::space_type,string); \
			name(string); \
			name(const unit&); \
			explicit name(const unit&,string)

#define SCALAR_UNIT_HPP_END() public: \
			static const string dimensions_match; \
			static const vector_real_dimensions real_dimensions; \
	}

#define SCALAR_UNIT_HPP(name) class name : public scalar_unit_crtp<name> \
	{	\
		public: \
			explicit name(math::space_type,string); \
			name(string); \
			name(const unit&); \
			explicit name(const unit&,string); \
\
			static const string dimensions_match; \
			static const vector_real_dimensions real_dimensions; \
	}

#define SCALAR_UNIT_CPP(name,dimensions) name::name(math::space_type new_value,string init_value) : unit(new_value,init_value),scalar_unit_crtp<name>(new_value,init_value) \
			{ \
			} \
\
	name::name(string init_value) : unit(init_value),scalar_unit_crtp<name>(init_value) \
			{ \
			} \
\
	name::name(const unit& new_unit) : unit(new_unit),scalar_unit_crtp<name>(new_unit) \
			{ \
			} \
\
	name::name(const unit& new_unit,string init_value) : unit(new_unit,init_value),scalar_unit_crtp<name>(new_unit,init_value) \
			{ \
			} \
\
const string name::dimensions_match = dimensions; \
const vector_real_dimensions name::real_dimensions = create_real_dimensions(dimensions)

using namespace std;

namespace physics::units
{
	class auto_scalar;

	class scalar_unit : public virtual unit
	{
		public:
			scalar_unit();
			scalar_unit(const unit&);
			explicit scalar_unit(math::space_type,string);
			explicit scalar_unit(math::unit_number, const vector_actual_dimensions&);
			explicit scalar_unit(string);
			explicit scalar_unit(const unit&,string);

			void operator =(const scalar_unit&);
			auto_scalar operator +(const scalar_unit&) const;
			auto_scalar operator -(const scalar_unit&) const;
			auto_scalar operator *(const scalar_unit&) const;
			auto_scalar operator /(const scalar_unit&) const;
			auto_scalar operator ^(const scalar_unit&) const;
			void operator +=(const scalar_unit&);
			void operator -=(const scalar_unit&);

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			auto_scalar operator +(U) const;
			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			auto_scalar operator -(U) const;
			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			auto_scalar operator *(U) const;
			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			auto_scalar operator /(U) const;
			template<typename U, typename = typename enable_if<is_integer_number<U>::value>::type>
			auto_scalar operator ^(U) const;

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator +=(U y)
			{
				unit::value += y;
			}

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator -=(U y)
			{
				unit::value -= y;
			}

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator *=(U y)
			{
				unit::value *= y;
			}

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator /=(U y)
			{
				unit::value /= y;
			}

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator ^=(U y)
			{
				unit::value = unit::value ^ y;
			}
	};

	template<typename T>
	class scalar_unit_crtp : public unit_crtp<T>,public scalar_unit
	{
		public:
			scalar_unit_crtp() : unit(),unit_crtp<T>(),scalar_unit()
			{
			}

			explicit scalar_unit_crtp(math::space_type new_value,string init_value) : unit(new_value,init_value),unit_crtp<T>(new_value,init_value),scalar_unit(new_value,init_value)
			{
			}

			scalar_unit_crtp(string init_value) : unit(init_value),unit_crtp<T>(init_value),scalar_unit(init_value)
			{
			}

			scalar_unit_crtp(const unit& new_unit) : unit(new_unit),unit_crtp<T>(new_unit),scalar_unit(new_unit)
			{
			}

			explicit scalar_unit_crtp(const unit& new_unit,string init_value) : unit(new_unit,init_value),unit_crtp<T>(new_unit,init_value),scalar_unit(new_unit,init_value)
			{
			}

			void operator =(const scalar_unit& x)
			{
				scalar_unit::operator =(x);
			}

			auto_scalar operator +(const scalar_unit&) const;
			auto_scalar operator -(const scalar_unit&) const;
			auto_scalar operator *(const scalar_unit&) const;
			auto_scalar operator /(const scalar_unit&) const;
			auto_scalar operator ^(const scalar_unit&) const;

			void operator +=(const scalar_unit& x)
			{
				scalar_unit::operator+=(x);
			}

			void operator -=(const scalar_unit& x)
			{
				scalar_unit::operator-=(x);
			}

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			auto_scalar operator +(U) const;
			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			auto_scalar operator -(U) const;
			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			auto_scalar operator *(U) const;
			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			auto_scalar operator /(U) const;
			template<typename U, typename = typename enable_if<is_integer_number<U>::value>::type>
			auto_scalar operator ^(U) const;

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator +=(U y)
			{
				scalar_unit::operator+=(y);
			}

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator -=(U y)
			{
				scalar_unit::operator-=(y);
			}

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator *=(U y)
			{
				scalar_unit::operator*=(y);
			}

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator /=(U y)
			{
				scalar_unit::operator/=(y);
			}

			template<typename U, typename = typename enable_if<is_number<U>::value>::type>
			void operator ^=(U y)
			{
				scalar_unit::operator^=(y);
			}
	};
}

#endif // SCALAR_UNIT_HPP_INCLUDED
