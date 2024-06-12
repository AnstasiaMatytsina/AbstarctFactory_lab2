#ifndef CPPPRINTOPERATORUNIT_H
#define CPPPRINTOPERATORUNIT_H
#include <printoperatorunit.h>

class CppPrintOperatorUnit : public PrintOperatorUnit
{
public:
    explicit PrintOperatorUnit( const std::string& text ) : m_text( text ) { }
    std::string compile( unsigned int level = 0 ) const {}
private:
    std::string m_text;

#endif // CPPPRINTOPERATORUNIT_H
