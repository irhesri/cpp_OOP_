#ifndef ARRAY
# define ARRAY

# include <iostream>

template <class T>
class Array 
{
		T				*arr;
		unsigned int	len;
	public:
		Array() 
		{
			len = 0;
		};
		Array(Array const &arr) 
		{
			this->arr = new T[arr.size()];
			(*this) = arr;
		};
		Array(unsigned int n) 
		{
			arr = new T[n];
			len = n;
		};
		~Array()
		{
			if (len)
				delete[] arr;
		}
		T	operator[](unsigned int i) const
		{
			try
			{
				if ((unsigned int)i >= len)
					throw (std::exception());
				return (arr[(unsigned int)i]);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			return (0);
		}
		Array	&operator=(Array const &arr) 
		{
			unsigned int x = arr.size();
			if (len != x)
			{
				if (len)
					delete[] this->arr;
				if (x)
					this->arr = new T[x];
				len = x;
			}
			for (unsigned int i = 0; i < x; i++)
				this->arr[i] = arr[i];
			return (*this);
		}
		unsigned int	size() const
		{
			return (len);
		}
};


#endif