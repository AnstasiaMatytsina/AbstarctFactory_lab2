#include "csharpprintoperatorunit.h"

std::string CSharpPrintOperatorUnit::compile(unsigned int level) const {
    return generateShift( level ) + "Console.WriteLine( \"" + _text + "\" );\n";
}
