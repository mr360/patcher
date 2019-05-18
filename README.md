# patcher
A C++ dll that allows for easy patching of live and static files

## Example
### Static Patching
    int main()
    {
        Patch::Static.Load(file);
        Patch::Save("file_original.bak");

        Patch::Static.SetEA("0x000000","0x00FF90");
        if (Patch::Static.LocateAddr("0x003A10"))
        {
          Patch::Patch("EF36FFEA1E","FFFFFFFFF0"); 
          Patch::Save();
        }

        Patch::Unload();
    }
    
### Live Patching    
    // The same as static patching but you load in the handle to the live proc.
