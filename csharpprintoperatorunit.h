#ifndef CSHARPPRINTOPERATORUNIT_H
#define CSHARPPRINTOPERATORUNIT_H
#include <printoperatorunit.h>

class CSharpPrintOperatorUnit: public PrintOperatorUnit
{
public:
    CSharpPrintOperatorUnit(const std::string& text) : PrintOperatorUnit(text){}

     std::string compile( unsigned int level = 0 ) const override{
         return generateShift(level) + "Console.WriteLine(\"" + _text + "\");\n";
     }
};

#endif // CSHARPPRINTOPERATORUNIT_H
