#pragma once

#if defined(EXTERN_CLANG_ENABLED)

#include "Blueprint/Parser/Visitors/VisitContext.hpp"

namespace blueprint { namespace reflection { class EnumType; } }

namespace blueprint
{
    class EnumVisitor
    {
    public:
        static void Visit(VisitContext& context, const clang::Cursor& cursor);

    private:
        static void FillEnum(reflection::EnumType* enumType, const clang::Cursor& cursor);
    };
}

#endif