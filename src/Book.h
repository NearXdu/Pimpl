#ifndef __BOOK_H__
#define __BOOK_H__
class Book
{
    public:
	Book();
	~Book();
	void print();

    private:
	class BookImpl;
	BookImpl* pimpl;
};
#endif

