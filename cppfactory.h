#ifndef CPPFACTORY_H
#define CPPFACTORY_H
#include "factory.h"
#include"cppclassunit.h"
#include"cppmethodunit.h"
#include"cppprintoperatorunit.h"
#include"factory.h"

class CppFactory:public Factory
{
public:
    // cоздаёт smart ptr cppclassunit и возвращает его
        std::shared_ptr<ClassUnit> CreateClassUnit(const std::string& name) const override{
            return std::make_shared<CPP_ClassUnit>(name);
        };

        // по аналогии
        std::shared_ptr<MethodUnit> CreateMethodUnit(const std::string& name, const std::string& returnType, Unit::Flags flags) const override{
            return std::make_shared<CPP_MethodUnit>(name, returnType, flags);
        }

        std::shared_ptr<PrintOperatorUnit> CreatePrintOperatorUnit(const std::string& text) const override{
            return std::make_shared<CPP_PrintOperatorUnit>(text);
        }

};

#endif // CPPFACTORY_H
