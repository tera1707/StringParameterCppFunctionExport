using System.Runtime.InteropServices;

bool resultLong = NativeMethods.IsStringLengthAtLeast10("ThisIsALongString");
Console.WriteLine(resultLong);

bool resultShort = NativeMethods.IsStringLengthAtLeast10("short");
Console.WriteLine(resultShort);

internal static partial class NativeMethods
{
    [LibraryImport("Dll1.dll", StringMarshalling = StringMarshalling.Utf16)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool IsStringLengthAtLeast10(string str);
}

