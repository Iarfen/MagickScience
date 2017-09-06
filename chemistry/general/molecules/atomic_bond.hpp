#ifndef ATOMIC_BOND_HPP_INCLUDED
#define ATOMIC_BOND_HPP_INCLUDED

#include <memory>

#include "chemistry/general/atoms/atom.hpp"
#include "units.hpp"

using namespace std;
using namespace physics::units;

namespace chemistry
{
	class atomic_bond
	{
		public:
			atomic_bond(const shared_ptr<atom>&,const shared_ptr<atom>&,atomic_bond_weight);

			inline const length& get_bond_length()
			{
				return bond_length;
			}

			/*inline enthalpy get_bond_enthalpy()
			{
				//return bond_enthalpy;
			}*/

			bool is_covalent() const
			{
				return (is_covalent_polar() or is_covalent_apolar());
			}

			bool is_covalent_polar() const
			{

			}

			bool is_covalent_apolar() const
			{

			}

			inline atomic_bond_type get_atomic_bond_type()
			{
				if (atom1.lock()->is_non_metal() and atom2.lock()->is_metallic())
				{
					return atomic_bond_type::ionic;
				}
				else if(atom1.lock()->is_non_metal() and atom2.lock()->is_non_metal())
				{
					return atomic_bond_type::covalent;
				}
				else if(atom1.lock()->is_metallic() and atom2.lock()->is_metallic())
				{
					return atomic_bond_type::metallic;
				}
			}

			inline bool is_flexible() const
			{
				return (weight == atomic_bond_weight::single);
			}

			inline bool is_rigid() const
			{
				return !is_flexible();
			}

			int get_total_electrons() const;
			bool is_bond(string) const;

		private:
			weak_ptr<atom> atom1;
			weak_ptr<atom> atom2;
			atomic_bond_weight weight;
			length bond_length;
			//enthalpy bond_enthalpy;
	};
}

#endif // ATOMIC_BOND_HPP_INCLUDED
