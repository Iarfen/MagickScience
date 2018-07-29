#ifndef LAB_UNIT_HPP_INCLUDED
#define LAB_UNIT_HPP_INCLUDED

#include "unit_number.hpp"

#include "topology/topology.hpp"
#include "informatics/types/is_number.hpp"

#include <cmath>
#include <string>

using namespace std;

namespace msci
{
	class lab_number : public unit_number
	{
		public:
			lab_number();
			lab_number(msci::space_type,msci::space_type);

			inline const msci::space_type& get_error_value() const
			{
				return error_value;
			}

			lab_number operator +(const lab_number&) const;
			lab_number operator -(const lab_number&) const;
			lab_number operator *(const lab_number&) const;
			lab_number operator /(const lab_number&) const;
			lab_number operator ^(const lab_number&) const;
			void operator +=(const lab_number&);
			void operator -=(const lab_number&);
			void operator *=(const lab_number&);
			void operator /=(const lab_number&);
			void operator ^=(const lab_number&);

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			void operator =(T y)
			{
				value = y;
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			lab_number operator +(T y) const
			{
				return lab_number(value + y,error_value);
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			lab_number operator -(T y) const
			{
				return lab_number(value - y,error_value);
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			lab_number operator *(T y) const
			{
				return lab_number(value * y,error_value * y);
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			lab_number operator /(T y) const
			{
				return lab_number(value / y,error_value / y);
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			lab_number operator ^(T y) const
			{
				return lab_number(std::pow(value, y),pow(error_value,y));
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			void operator +=(T y)
			{
				value += y;
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			void operator -=(T y)
			{
				value -= y;
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			void operator *=(T y)
			{
				value *= y;
				error_value *= y;
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			void operator /=(T y)
			{
				value /= y;
				error_value /= y;
			}

			template<typename T, typename = typename enable_if<is_number<T>::value>::type>
			void operator ^=(T y)
			{
				value = std::pow(value, y);
				error_value = pow(error_value,y);
			}

			virtual string print() const override;

		private:
			msci::space_type error_value;
	};
}

ostream& operator <<(ostream&, const msci::lab_number&);

#endif // LAB_UNIT_HPP_INCLUDED
