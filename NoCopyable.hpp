#ifndef INCLUDE_NO_COPYABLE_HPP
#define INCLUDE_NO_COPYABLE_HPP

/*********************************************************************************************
  * Cette classe permet d'interdire la copie et l'affectation. En effet si on essaye
  * de faire une copie ou une affectation d'un objet de cette classe ou d'un objet dont le
  * type dérive de cette classe, le compilateur refuse la compilation sous prétexte que
  * "Le constructeur de copie et/ou l'opérateur d'affectation" est privé dans ce contexte.
  *
**********************************************************************************************/
class NoCopyable
{
public:
private:
	NoCopyable( NoCopyable const& );
	NoCopyable& operator=( NoCopyable const& );
};

#endif
