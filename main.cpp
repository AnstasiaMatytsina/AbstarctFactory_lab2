#include <QCoreApplication>
#include <ClassUnit.cpp>
#include <Unit.h>
#include "MethodUnit.h"
#include "PrintOperatorUnit.h"
#include "cppfactory.h"
#include "csharpfactory.h"
#include "javafactory.h"
#include "factory.h"


const std::vector< std::string > ClassUnit::ACCESS_MODIFIERS = { "public","protected", "private", "internal", "protected_internal", "private_protected" };

std::shared_ptr<Factory> generateFactory(std::string lang){
    if (lang == "Cpp") {
        return std::make_shared<CppFactory>();
    }
    if (lang == "CSharp") {
        return std::make_shared<CSharpFactory>();
    }
    if (lang == "Java") {
        return std::make_shared<JavaFactory>();
    }
    return std::make_shared<Factory>();
}

std::string generateProgram(std::shared_ptr<Factory> factory){
    try {
        auto myClass = factory->CreateClassUnit("MyClass");
        myClass->add(factory->CreateMethodUnit("testFunc1", "void", 0),ClassUnit::PUBLIC);
        myClass->add(factory->CreateMethodUnit("testFunc2", "void", MethodUnit::STATIC),ClassUnit::PRIVATE);
        myClass->add(factory->CreateMethodUnit("testFunc3", "void", MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::PUBLIC);

        std::shared_ptr< MethodUnit > method = factory->CreateMethodUnit( "testFunc4", "void", MethodUnit::STATIC);
        method->add(factory->CreatePrintOperatorUnit( R"(Hello, world!)" ));
        myClass->add(method, ClassUnit::PROTECTED);

        return myClass->compile();
    }
    catch (const std::runtime_error& e) {
        // Обрабатываем исключения, возникающие во время генерации программы
        std::cerr << e.what();//Оператор вывода, для вывода информации об исключении, возникшем во время выполнения программы.
        //Объект `e` является экземпляром класса `std::runtime_error` (или другого производного класса от `std::exception`), который был выброшен в блоке `try`/`catch`.
        return "";
    }
}

void print(const std::string result, std::string name) {
    if (result == "") {
        return;
    }
    std::cout<< "Language " << name << '\n'<< result << std::endl;
    getchar();
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    std::string lang;
    while (1) {
        std::cin >> lang;
        print(generateProgram(generateFactory(lang)), lang);
    }
    return a.exec();
}
