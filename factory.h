#ifndef FACTORY_H
#define FACTORY_H
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"


class Factory
{
public:
    virtual std::shared_ptr<ClassUnit> CreateClassUnit(const std::string& name) const = 0;
    virtual std::shared_ptr<MethodUnit> CreateMethodUnit(const std::string& name, const std::string& returnType, Unit::Flags flags) const = 0;
    virtual std::shared_ptr<PrintOperatorUnit> CreatePrintOperatorUnit(const std::string& text) const = 0;

};

#endif // FACTORY_H
