#ifndef CHEMISTRY_GENERAL_ATOMS_ATOMS_VA_HPP
#define CHEMISTRY_GENERAL_ATOMS_ATOMS_VA_HPP

#include "normal_atom.hpp"

#include "units.hpp"

namespace chemistry
{
	class atom_N : public normal_atom<atom_N>
	{
		public:
			ATOM_HPP(atom_N);

			static const atom_symbol enum_type = atom_symbol::N;

			static const string name;
			static const string symbol;

			static const atomic_group group = VA;
			static const int period = 2;
			static const atomic_block block = atomic_block::p;

			static const int z = 7;
			static const int mass_number = 7;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 3.04;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_P : public normal_atom<atom_P>
	{
		public:
			ATOM_HPP(atom_P);

			static const atom_symbol enum_type = atom_symbol::P;

			static const string name;
			static const string symbol;

			static const atomic_group group = VA;
			static const int period = 3;
			static const atomic_block block = atomic_block::p;

			static const int z = 15;
			static const int mass_number = 16;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 2.19;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_As : public normal_atom<atom_As>
	{
		public:
			ATOM_HPP(atom_As);

			static const atom_symbol enum_type = atom_symbol::As;

			static const string name;
			static const string symbol;

			static const atomic_group group = VA;
			static const int period = 4;
			static const atomic_block block = atomic_block::p;

			static const int z = 33;
			static const int mass_number = 42;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 2.18;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_Sb : public normal_atom<atom_Sb>
	{
		public:
			ATOM_HPP(atom_Sb);

			static const atom_symbol enum_type = atom_symbol::Sb;

			static const string name;
			static const string symbol;

			static const atomic_group group = VA;
			static const int period = 5;
			static const atomic_block block = atomic_block::p;

			static const int z = 51;
			static const int mass_number = 71;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 2.05;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_Bi : public normal_atom<atom_Bi>
	{
		public:
			ATOM_HPP(atom_Bi);

			static const atom_symbol enum_type = atom_symbol::Bi;

			static const string name;
			static const string symbol;

			static const atomic_group group = VA;
			static const int period = 6;
			static const atomic_block block = atomic_block::p;

			static const int z = 83;
			static const int mass_number = 126;

			static const length atomic_radius;
			static const mass standard_atomic_mass;

			static constexpr float electronegativity = 2.02;
			static const bool radioactive = false;

			static const molar_energy ionization_energy;
			static const length covalent_radius;
			static const length van_der_waals_radius;

			static const cas_number cas_number;
	};

	class atom_Mc : public normal_atom<atom_Mc>
	{
		public:
			ATOM_HPP(atom_Mc);

			static const atom_symbol enum_type = atom_symbol::Mc;

			static const string name;
			static const string symbol;

			static const atomic_group group = VA;
			static const int period = 7;
			static const atomic_block block = atomic_block::p;

			static const int z = 115;
			static const int mass_number = 175;

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

#endif // CHEMISTRY_GENERAL_ATOMS_ATOMS_VA_HPP
