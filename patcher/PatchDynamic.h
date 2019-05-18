#pragma once
#include "IPatch.h"

namespace Patch
{
    class Dynamic : IPatch
    {
        bool Load(std::fstream& file) override;
        void SetEA(std::string& start, std::string& end) override;
        bool LocateAddr(std::string& addr) override;
        bool Patch(std::string& esec, std::string& nsec) override;
        bool Unload() override;
    };
}