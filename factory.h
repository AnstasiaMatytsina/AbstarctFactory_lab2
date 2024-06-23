#ifndef FACTORY_H
#define FACTORY_H
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"
#include <memory>


class Factory
{
public:
    virtual std::shared_ptr<ClassUnit> CreateClassUnit(const std::string& name) const {
        throw std::runtime_error( "Not supported language" );
    }
    virtual std::shared_ptr<MethodUnit> CreateMethodUnit(const std::string& name, const std::string& returnType, Unit::Flags flags) const {
        throw std::runtime_error( "Not supported language" );
    }
    virtual std::shared_ptr<PrintOperatorUnit> CreatePrintOperatorUnit(const std::string& text) const {
        throw std::runtime_error( "Not supported language" );
    }
};

#endif // FACTORY_H
