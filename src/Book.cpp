#include "Book.h"
#include "BookImpl.h"

Book::Book()
{
    pimpl = new BookImpl();
}
Book::~Book()
{
    delete pimpl;
}
void Book::print()
{
    pimpl->print();
}
void Book::BookImpl::print()
{
    std::cout<<"print in imple"<<std::endl;
}
