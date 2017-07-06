#ifndef __BOOKIMPL_H__
#define __BOOKIMPL_H__
#include "Book.h"
#include <iostream>
#include <string>
class Book::BookImpl
{
    public:
	void print();
    private:
	std::string content_;
	std::string titil_;

};
#endif
