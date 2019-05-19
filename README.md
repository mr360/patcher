# patcher
A C++ dll that allows for easy patching of live and static files

## Example
### Static Patching
    int main()
    {
        Patch::Static.Load(".../file.exe");
        Patch::Static.Save("file_original.bak");

        Patch::Static.SetEA("0x000000","0x00FF90");
        if (Patch::Static.LocateAddr("0x003A10"))
        {
          Patch::Patch("EF36FFEA1E","FFFFFFFFF0"); 
          Patch::Static.Save();
        }

        Patch::Static.Unload();
    }
    
### Live Patching    
    // The same as static patching but you load in the handle to the live proc.
