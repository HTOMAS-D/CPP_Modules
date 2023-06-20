#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
	public:
		Character(std::string const & name);
		Character(Character const & src);
		~Character();
		Character & operator=(Character const & rhs);
		
		std::string const & getName() const;
		
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
		AMateria* inventory[4];
};

#endif
