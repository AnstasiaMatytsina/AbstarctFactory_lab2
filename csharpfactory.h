#ifndef CSHARPFACTORY_H
#define CSHARPFACTORY_H
#include "factory.h"
#include "csharpclassunit.h"
#include "csharpmethodUnit.h"
#include "csharpprintoperatorunit.h"

class CSharpFactory:public Factory
{
public:
    std::shared_ptr<ClassUnit> CreateClassUnit(const std::string& name) const override{
        return std::make_shared<CSharpClassUnit>(name);
    }

    std::shared_ptr<MethodUnit> CreateMethodUnit(const std::string& name, const std::string& returnType, Unit::Flags flags) const override{
        return std::make_shared<CSharpMethodUnit>(name, returnType, flags);
    }

    std::shared_ptr<PrintOperatorUnit> CreatePrintOperatorUnit(const std::string& text) const override{
        return std::make_shared<CSharpPrintOperatorUnit>(text);
    }
};

#endif // CSHARPFACTORY_H
