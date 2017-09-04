#ifndef CHEMISTRY_GENERAL_ATOMS_ATOMS_VIA_HPP
#define CHEMISTRY_GENERAL_ATOMS_ATOMS_VIA_HPP

#include "normal_atom.hpp"

#include "units.hpp"

namespace chemistry
{
	class atom_O : public normal_atom<atom_O>
	{
		public:
			ATOM_HPP(atom_O);

			static const atom_symbol enum_type = atom_symbol::O;

			static const string name;
			static const string symbol;

			static const atomic_group group = VIA;
			static const int period = 2;
			static const atomic_block block = atomic_block::p;

			static const int z = 8;
			static const int mass_number = 8;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 3.44;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_S : public normal_atom<atom_S>
	{
		public:
			ATOM_HPP(atom_S);

			static const atom_symbol enum_type = atom_symbol::S;

			static const string name;
			static const string symbol;

			static const atomic_group group = VIA;
			static const int period = 3;
			static const atomic_block block = atomic_block::p;

			static const int z = 16;
			static const int mass_number = 16;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 2.58;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_Se : public normal_atom<atom_Se>
	{
		public:
			ATOM_HPP(atom_Se);

			static const atom_symbol enum_type = atom_symbol::Se;

			static const string name;
			static const string symbol;

			static const atomic_group group = VIA;
			static const int period = 4;
			static const atomic_block block = atomic_block::p;

			static const int z = 34;
			static const int mass_number = 45;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 2.55;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_Te : public normal_atom<atom_Te>
	{
		public:
			ATOM_HPP(atom_Te);

			static const atom_symbol enum_type = atom_symbol::Te;

			static const string name;
			static const string symbol;

			static const atomic_group group = VIA;
			static const int period = 5;
			static const atomic_block block = atomic_block::p;

			static const int z = 52;
			static const int mass_number = 76;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 2.1;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_Po : public normal_atom<atom_Po>
	{
		public:
			ATOM_HPP(atom_Po);

			static const atom_symbol enum_type = atom_symbol::Po;

			static const string name;
			static const string symbol;

			static const atomic_group group = VIA;
			static const int period = 6;
			static const atomic_block block = atomic_block::p;

			static const int z = 84;
			static const int mass_number = 125;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 2.0;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_Lv : public normal_atom<atom_Lv>
	{
		public:
			ATOM_HPP(atom_Lv);

			static const atom_symbol enum_type = atom_symbol::Lv;

			static const string name;
			static const string symbol;

			static const atomic_group group = VIA;
			static const int period = 7;
			static const atomic_block block = atomic_block::p;

			static const int z = 116;
			static const int mass_number = 177;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 0;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};
}

#endif // CHEMISTRY_GENERAL_ATOMS_ATOMS_VIA_HPP
