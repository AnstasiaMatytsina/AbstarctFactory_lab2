#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H
#include <methodunit.h>
#include "classunit.h"

class CSharpClassUnit : public ClassUnit
{
public:
    CSharpClassUnit(const std::string& name, const std::string& returnType, const Flags& flags):
            MethodUnit( name, returnType, flags ) {}
    void add(const UnitPtr& unit, Flags flags) override;
    std::string compile(unsigned int level = 0) const override;
};

#endif // CSHARPMETHODUNIT_H
