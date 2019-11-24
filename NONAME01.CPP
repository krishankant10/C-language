#include <iostream.h>
#include <conio.h>
template <class T>
class treenode
{
   protected:
	T data;
	treenode<T> *left;
	treenode<T> *right;
   public:
	treenode(const T &dataIn)
	{
		data=datain;
		left=right=NULL;
	}
	treenode(const T &datain,treenode<T> *l,treenode<T> *r)
	{
		data=datain;
		left=1;
		right=1;
	}
	friend class binarytree<T> ;
};
template<class T>
class binarytree

