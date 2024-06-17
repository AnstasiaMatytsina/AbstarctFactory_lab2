#include "cppprintoperatorunit.h"

std::string CppPrintOperatorUnit::compile(unsigned int level) const {return generateShift( level ) + "printf( \"" + _text + "\" );\n";}
