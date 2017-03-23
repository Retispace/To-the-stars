#ifndef INCLUDE_NO_COPYABLE_HPP
#define INCLUDE_NO_COPYABLE_HPP

/*********************************************************************************************
  * Cette classe permet d'interdire la copie et l'affectation. En effet si on essaye
  * de faire une copie ou une affectation d'un objet de cette classe ou d'un objet dont le
  * type d�rive de cette classe, le compilateur refuse la compilation sous pr�texte que
  * "Le constructeur de copie et/ou l'op�rateur d'affectation" est priv� dans ce contexte.
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
