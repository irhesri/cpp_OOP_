#include "LinkedList.hpp"

Node::Node(AMateria *data)
{
	this->data = data;
	next = NULL;
};

Node::~Node()
{
	delete(data);
};

LinkedList::LinkedList()
{
	head = NULL;
}

LinkedList::LinkedList(LinkedList const &list)
{
	(*this) = list;
};


LinkedList::~LinkedList()
{
	Node	*tmp = head;

	while (head)
	{
		tmp = head->next;
		delete (head);
		head = tmp;
	}
}

LinkedList	&LinkedList::operator=(LinkedList const &list)
{
	AMateria *tmp = (list.getAMateria(0));

	for (int i = 1; tmp; i++)
	{
		this->pushBack(tmp->clone());
		tmp = list.getAMateria(i);
	}
	return (*this);
};

void	LinkedList::pushBack(Node *node)
{
	if (!head)
	{
		head = node;
		last = node;
		return ;
	}
	last->next = node;
	last = node;
};

void	LinkedList::pushBack(AMateria *data)
{
	this->pushBack(new Node(data));
};

Node	*LinkedList::deleteNode(int index)
{
	Node	*tmp = head;
	Node	*trash;

	if (index == 0)
	{
		head = head->next;
		return (tmp); 
	}
	for (int i = 0; (tmp->next) && (i < index); i++)
	{
		tmp = tmp->next;
		if (i == (index - 1))
		{
			trash = tmp->next;
			tmp->next = tmp->next->next;
			if (!tmp->next)
				last = tmp->next;
			return (trash);
		}
	}
	return (NULL);
};

AMateria	*LinkedList::getAMateria(int index) const
{
	Node	*tmp = head;

	for (int i = 0; tmp && (i < index); i++)
		tmp = tmp->next;
	if (tmp)
		return (tmp->data);
	return (NULL);
}
