#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H
#include <methodunit.h>

class CppMethodUnit: public MethodUnit{
public:
            enum Modifier {
            STATIC = 1,
            CONST = 1 << 1,
            VIRTUAL = 1 << 2,
            };
        public:
            CppMethodUnit( const std::string& name, const std::string& returnType, Flags flags ) :m_name( name ), m_returnType( returnType ), m_flags( flags ) { }
            void add( const std::shared_ptr< Unit >& unit, Flags /* flags */ = 0 ) override;
            std::string compile( unsigned int level = 0 ) const override;
        protected:
            std::string m_name;// название метода
            std::string m_returnType;// возвращаемый тип
            Flags m_flags;//модификаторы метода
            std::vector< std::shared_ptr< Unit > > m_body;// тело метода
};

#endif // CPPMETHODUNIT_H
