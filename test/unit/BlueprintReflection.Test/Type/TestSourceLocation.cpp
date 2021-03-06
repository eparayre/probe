#include <catch/catch.hpp>

#include "BlueprintReflection/Type/SourceLocation.hpp"

TEST_CASE("TestSourceLocation")
{
    using namespace blueprint::reflection;

    SourceLocation location;

    SECTION("Default State")
    {
        CHECK(location.GetFile().empty());
        CHECK(location.GetStartPosition() == SourcePosition());
        CHECK(location.GetEndPosition() == SourcePosition());
    }

    SECTION("File")
    {
        location.SetFile("some/file");
        CHECK(location.GetFile() == "some/file");

        location.SetFile("some/other/file");
        CHECK(location.GetFile() == "some/other/file");
    }

    SECTION("ToString")
    {
        CHECK(location.ToString() == "<invalid> (0:0:0)-(0:0:0)");

        location.SetFile("some/file");
        CHECK(location.ToString() == "some/file (0:0:0)-(0:0:0)");

        location.SetStartPosition(SourcePosition(1, 2, 3));
        CHECK(location.ToString() == "some/file (1:2:3)-(0:0:0)");

        location.SetEndPosition(SourcePosition(4, 5, 6));
        CHECK(location.ToString() == "some/file (1:2:3)-(4:5:6)");
    }
}
