#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::Desktop {
class LocalDesktopWindowTarget {
public:
    class LayoutSync;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeRenderTarget@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@MEAAJPEAPEAVLocalAppRenderTarget@345@@Z
    virtual long MakeRenderTarget(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetHwndImpl@LocalDesktopWindowTarget@Desktop@Composition@UI@Microsoft@@MEAAPEAUHWND__@@XZ
    virtual HWND__* OnGetHwndImpl();
};
} // namespace Microsoft::UI::Composition::Desktop
