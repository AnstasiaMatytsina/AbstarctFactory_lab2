#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H
#include <methodunit.h>
#include "classunit.h"

class CSharpMethodUnit : public MethodUnit
{
public:
    CSharpMethodUnit(const std::string& name, const std::string& returnType, const Flags& flags): MethodUnit( name, returnType, flags ) {}
    std::string compile(const unsigned int level = 0) const override;
};

#endif // CSHARPMETHODUNIT_H
