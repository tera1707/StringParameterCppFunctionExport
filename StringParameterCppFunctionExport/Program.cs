using System.Runtime.InteropServices;
using System.Text;

bool resultLong = NativeMethods.IsStringLengthAtLeast10("ThisIsALongString");
Console.WriteLine(resultLong);

bool resultShort = NativeMethods.IsStringLengthAtLeast10("short");
Console.WriteLine(resultShort);

var buffer = new StringBuilder(256);
NativeMethods.GetNativeMessage(buffer, buffer.Capacity);
Console.WriteLine(buffer.ToString());

internal static partial class NativeMethods
{
    [LibraryImport("Dll1.dll", StringMarshalling = StringMarshalling.Utf16)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static partial bool IsStringLengthAtLeast10(string str);

    [DllImport("Dll1.dll", CharSet = CharSet.Unicode)]
    public static extern void GetNativeMessage(StringBuilder buffer, int bufferSize);
}


