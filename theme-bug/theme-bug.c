#include <windows.h>
#include <windowsx.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <Windows.Foundation.h>
#include <Windows.Foundation.Collections.h>
#include <Windows.system.h>
#include <windows.ui.xaml.hosting.h>
#include <windows.ui.xaml.hosting.desktopwindowxamlsource.h>
#include <windows.ui.xaml.markup.h>
#include <windows.ui.xaml.controls.h>
#include <Windows.ui.xaml.media.h>

#include <winstring.h>

#include <roapi.h>
#include <initguid.h>

#pragma comment(lib, "RuntimeObject.lib")
#pragma comment(lib, "WindowsApp.lib")

typedef __x_ABI_CWindows_CFoundation_CIPropertyValue IPropertyValue;
#define IID_IPropertyValue IID___x_ABI_CWindows_CFoundation_CIPropertyValue
DEFINE_GUID(IID___x_ABI_CWindows_CFoundation_CIPropertyValue, 0x4BD682DD, 0x7554, 0x40E9, 0x9A, 0x9B, 0x82, 0x65, 0x4E, 0xDE, 0x7E, 0x62);

typedef __x_ABI_CWindows_CFoundation_CIPropertyValueStatics IPropertyValueStatics;
#define IID_IPropertyValueStatics IID___x_ABI_CWindows_CFoundation_CIPropertyValueStatics
DEFINE_GUID(IID___x_ABI_CWindows_CFoundation_CIPropertyValueStatics, 0x629BDBC8, 0xD932, 0x4FF4, 0x96, 0xB9, 0x8D, 0x96, 0xC5, 0xC1, 0xE8, 0x58);

typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource IDesktopWindowXamlSource;
#define IID_IDesktopWindowXamlSource IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource, 0xD585BFE1, 0x00FF, 0x51BE, 0xBA, 0x1D, 0xA1, 0x32, 0x99, 0x56, 0xEA, 0x0A);

DEFINE_GUID(IID_IDesktopWindowXamlSourceNative, 0x3cbcf1bf, 0x2f76, 0x4e9c, 0x96, 0xab, 0xe8, 0x4b, 0x37, 0x97, 0x25, 0x54);

typedef __x_ABI_CWindows_CUI_CXaml_CIUIElement IUIElement;
#define IID_IUIElement IID___x_ABI_CWindows_CUI_CXaml_CIUIElement
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CIUIElement, 0x676D0BE9, 0xB65C, 0x41C6, 0xBA, 0x40, 0x58, 0xCF, 0x87, 0xF2, 0x01, 0xC1);

typedef __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement IFrameworkElement;
#define IID_IFrameworkElement IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElement 
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CIFrameworkElement, 0xA391D09B, 0x4A99, 0x4B7C, 0x9D, 0x8D, 0x6F, 0xA5, 0xD0, 0x1F, 0x6F, 0xBF);

typedef __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader IXamlReader;
#define IID_IXamlReaderIID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader, 0x24374CF1, 0xCCEB, 0x48BF, 0xA5, 0x14, 0x41, 0xB0, 0x18, 0x6F, 0x84, 0xC2);

typedef __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics IXamlReaderStatics;
#define IID_IXamlReaderStatics IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics, 0x9891C6BD, 0x534F, 0x4955, 0xB8, 0x5A, 0x8A, 0x8D, 0xC0, 0xDC, 0xA6, 0x02);


static void *
winrt_create_object(LPCWSTR classname)
{
    HSTRING hs;
    HRESULT hr;
    IInspectable *thing = NULL;

    hr = WindowsCreateString(classname, lstrlen(classname), &hs);
    assert(SUCCEEDED(hr));

    hr = RoActivateInstance(hs, &thing);
    assert(SUCCEEDED(hr));

    hr = WindowsDeleteString(hs);
    assert(SUCCEEDED(hr));

    return thing;
}


static void *
winrt_create_factory(LPCWSTR klass, const IID *const iid)
{
    HSTRING hs;
    HRESULT hr;
    void *thing = NULL;

    hr = WindowsCreateString(klass, lstrlen(klass), &hs);
    assert(SUCCEEDED(hr));

    hr = RoGetActivationFactory(hs, iid, &thing);
    assert(SUCCEEDED(hr));

    hr = WindowsDeleteString(hs);
    assert(SUCCEEDED(hr));

    return thing;
}

static IInspectable*
winrt_box_string(LPCWSTR s)
{
    IPropertyValueStatics *statics   = NULL;
    HSTRING                hs        = NULL;
    IInspectable          *boxed     = NULL;

    statics = winrt_create_factory(L"Windows.Foundation.PropertyValue", &IID_IPropertyValueStatics);

    WindowsCreateString(s, lstrlen(s), &hs);
    statics->lpVtbl->CreateString(statics, hs, &boxed);
    WindowsDeleteString(hs);

    statics->lpVtbl->Release(statics);

    return boxed;
}


struct MyWindow {
    HWND        handle;

    HWND        island_handle;
    IUIElement *island_root;
};


static LRESULT CALLBACK 
WindowProc(HWND, UINT, WPARAM, LPARAM);

void
init_island(struct MyWindow *window)
{
    HWND                            hWndXamlIsland     = 0;
    IInspectable                   *_xaml_source       = NULL;
    IDesktopWindowXamlSource       *xaml_source        = NULL;
    IDesktopWindowXamlSourceNative *xaml_source_native = NULL;

    // Create Xaml island

    _xaml_source = winrt_create_object(L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSource");
    _xaml_source->lpVtbl->QueryInterface(_xaml_source, &IID_IDesktopWindowXamlSource, &xaml_source);
    _xaml_source->lpVtbl->QueryInterface(_xaml_source, &IID_IDesktopWindowXamlSourceNative, (void**)&xaml_source_native);

    // Attach Xaml island to window

    xaml_source_native->lpVtbl->AttachToWindow(xaml_source_native, window->handle);
    xaml_source_native->lpVtbl->get_WindowHandle(xaml_source_native, &hWndXamlIsland);

    window->island_handle = hWndXamlIsland;

    SetWindowPos(hWndXamlIsland, 0, 0, 0, 640, 480, SWP_SHOWWINDOW);

    // Load Xaml markup

    LPCWSTR             markup              = NULL;
    HSTRING             hs_markup           = NULL;
    IXamlReaderStatics *xaml_reader_statics = NULL;
    IInspectable       *obj                 = NULL;

    // Uncomment whichever line is appropriate (if you use light theme globally uncomment
    // 'dark' and vice versa):
    markup = 
        L"<Grid xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' "
        L"      xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml' "
        L"      xmlns:d='http://schemas.microsoft.com/expression/blend/2008' "
        L"      xmlns:mc='http://schemas.openxmlformats.org/markup-compatibility/2006' "
        L"      RequestedTheme='dark' > "
        //L"      RequestedTheme='light' > "
        L"  <TextBox VerticalAlignment='Center' Text='Right click to open context menu'  /> "
        L"</Grid>";

    WindowsCreateString(markup, lstrlen(markup), &hs_markup);

    xaml_reader_statics = winrt_create_factory(L"Windows.UI.Xaml.Markup.XamlReader", &IID_IXamlReaderStatics);
    xaml_reader_statics->lpVtbl->Load(xaml_reader_statics, hs_markup, &obj);

    WindowsDeleteString(hs_markup);

    // Put Xaml into island

    obj->lpVtbl->QueryInterface(obj, &IID_IUIElement, &window->island_root);

    xaml_source->lpVtbl->put_Content(xaml_source, window->island_root);

    window->island_root->lpVtbl->UpdateLayout(window->island_root);

    xaml_source->lpVtbl->Release(xaml_source);
    xaml_source_native->lpVtbl->Release(xaml_source_native);
}

static HINSTANCE hInstance;
static LPCWSTR szWindowClass = L"Win32DesktopApp";

void
my_window_class_init(void)
{
    WNDCLASSEX wc    = { 0 };

    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.lpfnWndProc   = WindowProc;
    wc.hInstance     = hInstance;
    wc.lpszClassName = szWindowClass;
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.hIconSm       = LoadIcon(hInstance, IDI_APPLICATION);
    wc.hCursor       = LoadCursor(NULL,IDC_ARROW);
    wc.style         = CS_VREDRAW | CS_HREDRAW;

    RegisterClassEx(&wc);
}


void
my_window_init(struct MyWindow *window)
{
    LONG style = WS_OVERLAPPEDWINDOW | WS_VISIBLE;
    window->handle = CreateWindowEx(
        0,
        szWindowClass,
        L"Windows c++ Win32 Desktop App",
        style,
        CW_USEDEFAULT, CW_USEDEFAULT, 800, 600,
        NULL, NULL, hInstance, window
    );

    init_island(window);
}

struct MyWindow *window;

int CALLBACK 
WinMain(_In_ HINSTANCE _hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
    hInstance = _hInstance;

    RoInitialize(RO_INIT_MULTITHREADED);

    my_window_class_init();

    window = calloc(1, sizeof(*window));

    my_window_init(window);

    ShowWindow(window->handle, nCmdShow);
    UpdateWindow(window->handle);

    MSG msg = { 0 };
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

static LRESULT CALLBACK 
WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    struct MyWindow *window = (void*) GetWindowLongPtr(hWnd, GWLP_USERDATA);

    switch (msg)
    {
        case WM_CREATE: {
            CREATESTRUCT *cs = (CREATESTRUCT*)lParam;
            SetWindowLongPtr(hWnd, GWLP_USERDATA, (LONG_PTR)cs->lpCreateParams);
            break;
        }
        case WM_DESTROY: {
            PostQuitMessage(0);
            break;
        }
        default: {
            return DefWindowProc(hWnd, msg, wParam, lParam);
        }
    }

    return 0;
}