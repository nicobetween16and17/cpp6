#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T> class Array
{
	unsigned int _len;
	T *_arr;
	public:
	unsigned int size() const {return _len;}
	Array(){_len = 0; _arr = new T[_len]; std::cout << "empty array created\n";}
		~Array(){
			delete _arr;
			std::cout << "array destructed\n";};
		Array(unsigned int n) {_len = n; _arr = new T[n];
			for (unsigned int i = 0; i < _len; ++i) {
				_arr[i] = 0;
			}
			std::cout << "array of size " << _len << " created\n";
		};
		Array(const Array &c){
			if (*this != c)
				*this = c;
			return *this;
		}
		Array<T> &operator=(const Array &c)
		{
			delete _arr;
			_len = c.size();
			_arr = new T[_len];
			for (unsigned int i = 0; i < c.size(); ++i) {
				_arr[i] = c._arr[i];
			}
			return *this;
		}
		T &operator=(T value)
		{
			this = value;
			return this;
		}
		T &operator[](unsigned int i)
		{
			if (i >= _len)
				throw std::exception();
			else
				return _arr[i];
		};
};

#endif