#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H
#include "classunit.h"

class JavaClassUnit: public ClassUnit
{
public:
    JavaClassUnit(const std::string& name): ClassUnit(name){}
    std::string compile(unsigned int level = 0) const override;
};
#endif // JAVACLASSUNIT_H
