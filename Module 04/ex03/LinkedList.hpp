#pragma once

class AMateria;

class Node
{
	public:
		AMateria *data;
		Node	*next;
		Node(AMateria *data);
		~Node();
};

class LinkedList
{
	private:
		Node	*head;
		Node	*last;
	public:
		LinkedList();
		LinkedList(LinkedList const &list);
		~LinkedList();
		LinkedList	&operator=(LinkedList const &list);
		void	pushBack(Node *node);
		void	pushBack(AMateria *data);
		Node	*deleteNode(int index);
		AMateria	*getAMateria(int index) const;
};

# include "AMateria.hpp"