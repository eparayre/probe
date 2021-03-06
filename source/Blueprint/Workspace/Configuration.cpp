#include "Blueprint/Workspace/Configuration.hpp"

namespace blueprint
{
    void Configuration::SetName(const std::string& name)
    {
        name_ = name;
    }

    const std::string& Configuration::GetName() const
    {
        return name_;
    }

    void Configuration::AddDefine(const std::string& define)
    {
        defines_.push_back(define);
    }

    const Configuration::StringArray& Configuration::GetDefines() const
    {
        return defines_;
    }

    void Configuration::AddInclude(const std::string& include)
    {
        includes_.push_back(include);
    }

    const Configuration::StringArray& Configuration::GetIncludes() const
    {
        return includes_;
    }

    void Configuration::SetPrecompiledSource(const std::string& precompiledSource)
    {
        precompiledSource_ = precompiledSource;
    }

    const std::string& Configuration::GetPrecompiledSource() const
    {
        return precompiledSource_;
    }

    void Configuration::SetPrecompiledHeader(const std::string& precompiledHeader)
    {
        precompiledHeader_ = precompiledHeader;
    }

    const std::string& Configuration::GetPrecompiledHeader() const
    {
        return precompiledHeader_;
    }

    bool Configuration::HasPrecompiledHeader() const
    {
        return !precompiledHeader_.empty();
    }
}
