#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H
#include "classunit.h"

class CppClassUnit: public ClassUnit
{
public:
    CppClassUnit(const std::string& name): ClassUnit(name){}
    std::string compile( unsigned int level = 0 ) const override;
    void add(const std::shared_ptr< Unit >& unit, Flags flags) override;
};
#endif // CPPCLASSUNIT_H
