#ifndef JAVAFACTORY_H
#define JAVAFACTORY_H
#include "factory.h"
#include"javaclassunit.h"
#include"javamethodunit.h"
#include"javaprintoperatorunit.h"

class JavaFactory:public Factory
{
public:
        std::shared_ptr<ClassUnit> CreateClassUnit(const std::string& name) const override{
            return std::make_shared<JAVA_ClassUnit>(name);
        }

        std::shared_ptr<MethodUnit> CreateMethodUnit(const std::string& name, const std::string& returnType, Unit::Flags flags) const override{
            return std::make_shared<JAVA_MethodUnit>(name, returnType, flags);
        }

        std::shared_ptr<PrintOperatorUnit> CreatePrintOperatorUnit(const std::string& text) const override{
            return std::make_shared<JAVA_PrintOperatorUnit>(text);
        }

};

#endif // JAVAFACTORY_H
