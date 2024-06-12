#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H
#include <methodunit.h>

class JavaMethodUnit: public MethodUnit
{
public:
    JavaMethodUnit(const std::string& name, const std::string& returnType, const Flags& flags): MethodUnit( name, returnType, flags ) {}
    std::string compile(const unsigned int level = 0) const override;
}

#endif // JAVAMETHODUNIT_H
