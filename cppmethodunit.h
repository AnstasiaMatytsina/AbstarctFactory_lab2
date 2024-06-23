#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H
#include <methodunit.h>

class CppMethodUnit: public MethodUnit{
public:
    CppMethodUnit(const std::string& name, const std::string& returnType, const Flags& flags):MethodUnit( name, returnType, flags ) {}
    std::string compile( unsigned int level = 0 ) const override{
        std::string result = generateShift(level);      // производим нужные сдвиги
            if (_flags & STATIC)                            // если бит флага установлен на STATIC,
                result += "static ";                        // то метод статичный
            else if (_flags & VIRTUAL)                      // если бит VIRTUAL,
                result += "virtual ";                       // то метод виртуальный
            result += _returnType + ' ' + _name + "()";     // добавляем возвращаемый тип и имя метода
            if (_flags & CONST)                             // если имеет спецификатор CONST,
                result += " const";                         // то добавим const
            result += " {\n";                               // скобка метода
            for (const auto& it : _body)                    // производим генерацию тела метода с нужными отступами
                result += it->compile(level + 1);
            result += generateShift(level) + "}\n";         // закрытая скобка метода
            return result;                                  // возвращаем результат
            }
};
#endif // CPPMETHODUNIT_H
