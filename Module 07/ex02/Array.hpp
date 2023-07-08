#ifndef ARRAY
# define ARRAY

# include <iostream>

template <typename T> class Array 
{
		T		*arr;
		size_t	len;
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
		Array(size_t n) 
		{
			arr = new T[n]();
			len = n;
		};
		~Array()
		{
			if (len)
				delete[] arr;
		}
		T	&operator[](size_t i) const
		{
			if (i >= len)
				throw (std::exception());
			return (arr[i]);
		}
		Array	&operator=(Array const &arr) 
		{
			size_t x = arr.size();
			if (len != x)
			{
				if (len)
					delete[] this->arr;
				if (x)
					this->arr = new T[x];
				len = x;
			}
			for (size_t i = 0; i < x; i++)
				this->arr[i] = arr[i];
			return (*this);
		}
		size_t	size() const
		{
			return (len);
		}
};


#endif