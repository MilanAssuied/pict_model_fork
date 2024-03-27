namespace Sandbox.Tools;

public static class ArchitectureTools
{
    public static bool Is32BitProcess()
    {
        return IntPtr.Size == 4;
    }
    
    public static uint UIntPtrToUint(UIntPtr value)
    {
        var valueCountAsUint = checked((uint)value);
            
        if (Is32BitProcess())
        {
            valueCountAsUint = value.ToUInt32();
        }

        return valueCountAsUint;
    }
}
