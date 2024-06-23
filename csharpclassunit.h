#ifndef CSHARPCLASSUNIT_H
#define CSHARPCLASSUNIT_H
#include "classunit.h"

class CSharpClassUnit: public ClassUnit
{
public:
    explicit CSharpClassUnit(const std::string& name ):ClassUnit(name){}
    std::string compile( unsigned int level = 0 ) const;
};
#endif // CSHARPCLASSUNIT_H
