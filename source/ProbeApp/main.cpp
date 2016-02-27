#include "Probe/ClangParser.hpp"

int main(int argc, char* argv[])
{
    const char* filename = nullptr;

    if (argc > 1)
    {
        filename = argv[1];
    }

#if defined(EXTERN_CLANG_ENABLED)
    probe::ClangParser parser;
    parser.Parse(filename);
#endif

    return 0;
}
