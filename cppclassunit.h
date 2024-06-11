#ifndef CPPCLASSUNIT_H
#define CPPCLASSUNIT_H
#include "classunit.h"

class CppClassUnit: public ClassUnit
{
public:
    explicit ClassUnit( const std::string& name );
    void add( const std::shared_ptr< Unit >& unit, Flags flags );
    std::string compile( unsigned int level = 0 ) const;
};

#endif // CPPCLASSUNIT_H
