#pragma once
#include <string>
#include <fstream>

namespace Patch
{
    struct Obj
    {
        int a = 0;
    };

    class IPatch
    {
        public:
            virtual bool Load(std::fstream& file) = 0;
            virtual void SetEA(std::string& start, std::string& end) = 0;
            virtual bool LocateAddr(std::string& addr) = 0;
            virtual bool Patch(std::string& esec, std::string& nsec) = 0;
            virtual bool Unload() = 0;
    };
}