#include "openbabel/obconversion.h"
#include "openbabel/atom.h"
#include "openbabel/mol.h"
#include "openbabel/reaction.h"
#include <iostream>

int main()
{
	using namespace OpenBabel;


	OBAtom hydrogen;
	hydrogen.SetAtomicNum(1);

	std::shared_ptr<OBMol> mol = std::make_shared<OBMol>();
	mol->AddAtom(hydrogen);

	OBReaction react;
	react.AddReactant(mol);

	std::cin.get();
	return 0;
}