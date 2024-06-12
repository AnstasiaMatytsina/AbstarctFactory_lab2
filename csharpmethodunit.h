#ifndef CSHARPMETHODUNIT_H
#define CSHARPMETHODUNIT_H
#include <methodunit.h>

class CSharpClassUnit : public ClassUnit
{
public:
    explicit CSharpClassUnit(const std::string& name);
    void add(const UnitPtr& unit, Flags flags) override;
    std::string compile(unsigned int level = 0) const override;
};

#endif // CSHARPMETHODUNIT_H
