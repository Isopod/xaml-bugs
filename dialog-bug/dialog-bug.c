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

typedef __x_ABI_CWindows_CUI_CXaml_CControls_CIContentControl IContentControl;
#define IID_IContentControl IID___x_ABI_CWindows_CUI_CXaml_CControls_CIContentControl
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CControls_CIContentControl, 0xA26DD1DC, 0xCD44, 0x435C, 0xBE, 0x94, 0x01, 0xD6, 0x24, 0x1C, 0x23, 0x1C);

typedef __x_ABI_CWindows_CUI_CXaml_CControls_CIButton IButton;
#define IID_IButton IID___x_ABI_CWindows_CUI_CXaml_CControls_CIButton
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CControls_CIButton, 0x280335AE, 0x5570, 0x46C7, 0x8E, 0x0B, 0x60, 0x2B, 0xE7, 0x12, 0x29, 0xA2);

typedef __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase IButtonBase;
#define IID_IButtonBase IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CIButtonBase, 0xFA002C1A, 0x494E, 0x46CF, 0x91, 0xD4, 0xE1, 0x4A, 0x8D, 0x79, 0x86, 0x74);

typedef __x_ABI_CWindows_CUI_CXaml_CControls_CIContentDialog IContentDialog;
#define IID_IContentDialog IID___x_ABI_CWindows_CUI_CXaml_CControls_CIContentDialog
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CControls_CIContentDialog, 0x38DC4404, 0xD24E, 0x40D8, 0x94, 0x15, 0x34, 0x94, 0x64, 0xC1, 0xAF, 0xDC);

typedef __x_ABI_CWindows_CUI_CXaml_CControls_CIContentDialog3 IContentDialog3;
#define IID_IContentDialog3 IID___x_ABI_CWindows_CUI_CXaml_CControls_CIContentDialog3
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CControls_CIContentDialog3, 0x9D9A089E, 0xF954, 0x4EDE, 0xB0, 0x7F, 0x6B, 0x06, 0x9A, 0x9C, 0x01, 0x80);

typedef __x_ABI_CWindows_CUI_CXaml_CControls_CIPanel IPanel;
#define IID_IPanel IID___x_ABI_CWindows_CUI_CXaml_CControls_CIPanel
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CControls_CIPanel, 0xA50A4BBD, 0x8361, 0x469C, 0x90, 0xDA, 0xE9, 0xA4, 0x0C, 0x74, 0x74, 0xDF);

typedef  __FIEventHandler_1_IInspectable IEventHandler_IInspectable;
#define IID_IEventHandler_IInspectable IID___FIEventHandler_1_IInspectable
DEFINE_GUID(IID___FIEventHandler_1_IInspectable, 0xc50898f6, 0xc536, 0x5f47, 0x85, 0x83, 0x8b, 0x2c, 0x24, 0x38, 0xa1, 0x3b);

typedef __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler IRoutedEventHandler;
#define IID_IRoutedEventHandler IID___x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler 
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler, 0xA856E674, 0xB0B6, 0x4BC3, 0xBB, 0xA8, 0x1B, 0xA0, 0x6E, 0x40, 0xD4, 0xB5);

typedef __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs IRoutedEventArgs;
#define IID_IRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CIRoutedEventArgs, 0x5C985AC6, 0xD802, 0x4B38, 0xA2, 0x23, 0xBF, 0x07, 0x0C, 0x43, 0xFE, 0xDF);

typedef __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler IPointerEventHandler;
#define IID_IPointerEventHandler IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler
DEFINE_GUID(IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler, 0xE4385929, 0xC004, 0x4BCF, 0x89, 0x70, 0x35, 0x94, 0x86, 0xE3, 0x9F, 0x88);

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

// Callback helper

typedef HRESULT (*EventHandlerCallback)(IInspectable *sender, void *args, void *user_data);
typedef HRESULT (*EventHandlerCleanup)(void *user_data);

typedef struct IEventHandler IEventHandler;

typedef struct IEventHandlerVtbl {
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in IEventHandler * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in IEventHandler * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in IEventHandler * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in IEventHandler * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt void *e);
    END_INTERFACE
} IEventHandlerVtbl;


struct EventHandler {
    IEventHandlerVtbl      *vtbl;

    const IID              *iid;

    ULONG                   refcount;
    EventRegistrationToken  token;
    void                   *user_data;
    EventHandlerCallback    callback;
    EventHandlerCleanup     cleanup;
};

HRESULT STDMETHODCALLTYPE 
EventHandler_QueryInterface(
    __RPC__in IEventHandler* This,
    __RPC__in REFIID riid,
    _COM_Outptr_  void **ppvObject
) {
    struct EventHandler *obj = (struct EventHandler*)This;

    if (ppvObject == NULL)
        return E_POINTER;

    *ppvObject = NULL;

    if (IsEqualIID(riid, obj->iid))
        *ppvObject = obj;
    else if (IsEqualIID(riid, &IID_IUnknown))
        *ppvObject = obj;
    else
        return E_NOINTERFACE;

    InterlockedIncrement(&obj->refcount);

    return S_OK;
}

ULONG STDMETHODCALLTYPE 
EventHandler_AddRef( __RPC__in IEventHandler* This)
{
    struct EventHandler *obj = (struct EventHandler*)This;
    return InterlockedIncrement(&obj->refcount);
}

ULONG STDMETHODCALLTYPE 
EventHandler_Release(__RPC__in IEventHandler* This)
{
    struct EventHandler *obj = (struct EventHandler*)This;
    LONG refcount = InterlockedDecrement(&obj->refcount);

    if (refcount == 0) {
        if (obj->cleanup)
            obj->cleanup(obj->user_data);
        free(obj);
    }

    return refcount;
}

HRESULT STDMETHODCALLTYPE 
EventHandler_Invoke(
    IEventHandler* This,
    __RPC__in_opt IInspectable * sender,
    __RPC__in_opt void *e
) {
    struct EventHandler *obj = (struct EventHandler*)This;

    return obj->callback(sender, e, obj->user_data);
}

struct EventHandler*
event_handler_new(
    const IID            *iid,
    EventHandlerCallback  callback,
    void                 *user_data,
    EventHandlerCleanup   cleanup
) {
    static IEventHandlerVtbl vtbl = {
        .AddRef         = EventHandler_AddRef,
        .Release        = EventHandler_Release,
        .QueryInterface = EventHandler_QueryInterface,
        .Invoke         = EventHandler_Invoke
    };

    struct EventHandler *obj = calloc(1, sizeof(struct EventHandler));
    obj->vtbl        = &vtbl;
    obj->refcount    = 1;
    obj->callback    = callback;
    obj->user_data   = user_data;
    obj->cleanup     = cleanup;
    obj->iid         = iid;

    return obj;
}

//

struct MyWindow {
    HWND        handle;

    HWND        island_handle;
    IUIElement *island_root;
};


// Example callback


HRESULT
on_button_click(IInspectable * sender, void *_args, void *user_data)
{
    struct MyWindow *window = user_data;

    IInspectable    *obj = NULL;

    IContentDialog  *dialog              = NULL;
    IContentDialog3 *dialog3             = NULL;
    IContentControl *dialog_content_ctrl = NULL;
    IUIElement      *dialog_elem         = NULL;

    IPanel          *root = NULL;
    __FIVector_1_Windows__CUI__CXaml__CUIElement *children = NULL;

    __FIAsyncOperation_1_Windows__CUI__CXaml__CControls__CContentDialogResult *op = NULL;

    /* Create dialog */

    obj = winrt_create_object(L"Windows.UI.Xaml.Controls.ContentDialog");

    obj->lpVtbl->QueryInterface(obj, &IID_IContentDialog,  &dialog);
    obj->lpVtbl->QueryInterface(obj, &IID_IUIElement,      &dialog_elem);
    obj->lpVtbl->QueryInterface(obj, &IID_IContentControl, &dialog_content_ctrl);

    {
        IInspectable *s = winrt_box_string(L"Hi!");
        dialog->lpVtbl->put_Title(dialog, s);
        s->lpVtbl->Release(s);
    }
    {
        IInspectable *s = winrt_box_string(L"This is a content dialog.");
        dialog_content_ctrl->lpVtbl->put_Content(dialog_content_ctrl, s);
        s->lpVtbl->Release(s);
    }
    {
        HSTRING hs;
        WindowsCreateString(L"Ok", 2, &hs);
        dialog->lpVtbl->put_PrimaryButtonText(dialog, hs);
        WindowsDeleteString(hs);
    }

    /* Add dialog to Xaml tree & show */

    window->island_root->lpVtbl->QueryInterface(window->island_root, &IID_IPanel, &root);
    root->lpVtbl->get_Children(root, &children);
    children->lpVtbl->Append(children, dialog_elem);

    dialog->lpVtbl->ShowAsync(dialog, &op);

    /* Cleanup */

    obj->lpVtbl->Release(obj);
    dialog->lpVtbl->Release(dialog);
    dialog_content_ctrl->lpVtbl->Release(dialog_content_ctrl);
    dialog_elem->lpVtbl->Release(dialog_elem);

    root->lpVtbl->Release(root);
    children->lpVtbl->Release(children);

    return S_OK;
}


struct GetElementsByNameStruct {
    LPCWSTR             name;
    IUIElement        **ui_element;
    IFrameworkElement **fw_element;
    const IID          *custom_element_id;
    void               *custom_element;
};

static void
get_elements_by_name(IUIElement *root, struct GetElementsByNameStruct *entries)
{
    IFrameworkElement  *framework_elem = NULL;
    root->lpVtbl->QueryInterface(root, &IID_IFrameworkElement, &framework_elem);

    for (int i = 0; entries[i].name != NULL; ++i) {
        HSTRING            hs  = NULL;
        IInspectable      *obj = NULL;

        WindowsCreateString(entries[i].name, lstrlen(entries[i].name), &hs);
        framework_elem->lpVtbl->FindName(framework_elem, hs, &obj);

        if (obj != NULL) {
            if (entries[i].ui_element)
                obj->lpVtbl->QueryInterface(obj, &IID_IUIElement, entries[i].ui_element);

            if (entries[i].fw_element)
                obj->lpVtbl->QueryInterface(obj, &IID_IFrameworkElement, entries[i].fw_element);

            if (entries[i].custom_element)
                obj->lpVtbl->QueryInterface(obj, entries[i].custom_element_id, entries[i].custom_element);
            
            obj->lpVtbl->Release(obj);
        }
        WindowsDeleteString(hs);
    }

    framework_elem->lpVtbl->Release(framework_elem);
}


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

    LPCWSTR             markup              = NULL;
    HSTRING             hs_markup           = NULL;
    IXamlReaderStatics *xaml_reader_statics = NULL;
    IInspectable       *obj                 = NULL;

    markup = 
        L"<Grid xmlns='http://schemas.microsoft.com/winfx/2006/xaml/presentation' "
        L"      xmlns:x='http://schemas.microsoft.com/winfx/2006/xaml' "
        L"      xmlns:d='http://schemas.microsoft.com/expression/blend/2008' "
        L"      xmlns:mc='http://schemas.openxmlformats.org/markup-compatibility/2006' "
        L"      RowSpacing='12' ColumnSpacing='12'>"
        L"  <Grid.RowDefinitions> "
        L"    <RowDefinition Height='100'/>"
        L"    <RowDefinition Height='*'/>"
        L"    <RowDefinition Height='100'/>"
        L"  </Grid.RowDefinitions> "
        L"  <Grid.ColumnDefinitions> "
        L"    <ColumnDefinition Width='100'/>"
        L"    <ColumnDefinition Width='*'/>"
        L"    <ColumnDefinition Width='100'/>"
        L"  </Grid.ColumnDefinitions> "
        L"  <Rectangle Grid.Row='0' Grid.ColumnSpan='3' Fill='Red' HorizontalAlignment='Stretch' VerticalAlignment='Stretch' /> "
        L"  <Rectangle Grid.Row='2' Grid.ColumnSpan='3' Fill='Green' HorizontalAlignment='Stretch' VerticalAlignment='Stretch' /> "
        L"  <Rectangle Grid.Column='0' Grid.RowSpan='3' Fill='Blue' HorizontalAlignment='Stretch' VerticalAlignment='Stretch' /> "
        L"  <Rectangle Grid.Column='2' Grid.RowSpan='3' Fill='Orange' HorizontalAlignment='Stretch' VerticalAlignment='Stretch' /> "
        L"  <Button Content='Click me' x:Name='button' Grid.Row='1' Grid.Column='1' HorizontalAlignment='Center' VerticalAlignment='Center' /> "
        L"</Grid>";

    WindowsCreateString(markup, lstrlen(markup), &hs_markup);

    xaml_reader_statics = winrt_create_factory(L"Windows.UI.Xaml.Markup.XamlReader", &IID_IXamlReaderStatics);
    xaml_reader_statics->lpVtbl->Load(xaml_reader_statics, hs_markup, &obj);

    WindowsDeleteString(hs_markup);

    obj->lpVtbl->QueryInterface(obj, &IID_IUIElement, &window->island_root);

    IButtonBase  *button = NULL;

    struct GetElementsByNameStruct elements[] = 
        {
            {L"button",    NULL, NULL, &IID_IButtonBase, &button},
            {0}
        };

    get_elements_by_name(window->island_root, elements);

    // Add event handlers

#define BIND(obj, event, intf, callback, data, cleanup) \
    do { \
        struct EventHandler *handler = event_handler_new(&IID_ ## intf, callback, data, cleanup); \
        obj->lpVtbl->add_##event(obj, (intf*)handler, &handler->token); \
        ((IUnknown*)handler)->lpVtbl->Release((IUnknown*)handler); \
    } while (0)

    BIND(button,  Click, IRoutedEventHandler, on_button_click, window, NULL);

#undef BIND

    xaml_source->lpVtbl->put_Content(xaml_source, window->island_root);
    window->island_root->lpVtbl->UpdateLayout(window->island_root);

    xaml_source->lpVtbl->Release(xaml_source);
    xaml_source_native->lpVtbl->Release(xaml_source_native);
}

void
update_island(struct MyWindow *window)
{
    if (!window->island_root)
        return;

    RECT r = {0};
    GetClientRect(window->handle, &r);

    SetWindowPos(window->island_handle, NULL, r.left, r.top, r.right - r.left, r.bottom - r.top, SWP_NOACTIVATE | SWP_NOZORDER);

    window->island_root->lpVtbl->InvalidateArrange(window->island_root);
}

static HINSTANCE hInstance;

static LPCWSTR szWindowClass     = L"Win32DesktopApp";

void
my_window_class_init(void)
{
    WNDCLASSEX wc    = { 0 };

    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.lpfnWndProc   = WindowProc;
    wc.hInstance     = hInstance;
    wc.lpszClassName = szWindowClass;
    wc.hbrBackground = (HBRUSH)(COLOR_BACKGROUND + 1);
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
        WS_EX_NOREDIRECTIONBITMAP,
        szWindowClass,
        L"Windows c++ Win32 Desktop App",
        style,
        CW_USEDEFAULT, CW_USEDEFAULT, 800, 600,
        NULL, NULL, hInstance, window
    );

    init_island(window);
    update_island(window);
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

static int 
_GetResizeHandleHeight()
{
    return GetSystemMetrics(SM_CXPADDEDBORDER) + GetSystemMetrics(SM_CYSIZEFRAME);
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
        case WM_MOVE:
        case WM_SIZE: {
            update_island(window);
            break;
        }
        default: {
            return DefWindowProc(hWnd, msg, wParam, lParam);
        }
    }

    return 0;
}