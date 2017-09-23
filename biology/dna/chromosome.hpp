#ifndef BIOLOGY_DNA_CHROMOSOME_HPP_INCLUDED
#define BIOLOGY_DNA_CHROMOSOME_HPP_INCLUDED

#include "dna.hpp"
#include "gene.hpp"

#include <map>
#include <string>
#include <vector>

using namespace std;

namespace biology
{
	class chromosome
	{
		public:
			chromosome();
			explicit chromosome(string,dna*,rapidxml::xml_node<>*);
			explicit chromosome(map<string,gene>);

			inline const string& get_name() const
			{
				return name;
			}

			inline const map<string,gene>& get_genes() const
			{
				return genes;
			}

			inline const dna* get_dna_molecule() const
			{
				return dna_molecule;
			}

			inline const rapidxml::xml_node<>* get_chromosome_node() const
			{
				return chromosome_node;
			}

			bool is_gene_loaded(string) const;
			void load_gene(string) const;
			void unload_gene(string) const;
			void load_all_genes() const;
			void load_genes(vector<string>) const;
			void unload_genes(vector<string>) const;

			gene& operator[](string);
			const gene& operator[](string) const;

			inline int number_of_genes() const
			{
				return genes.size();
			}

			void switch_gene(string,gene);
			void insert_gene(string,gene);
			void insert_genes(string,map<string,gene>);
			void remove_gene(string);

		private:
			mutable map<string,gene> genes;
			dna* dna_molecule;
			rapidxml::xml_node<>* chromosome_node;
			string name;
	};
}

#endif // BIOLOGY_DNA_CHROMOSOME_HPP_INCLUDED