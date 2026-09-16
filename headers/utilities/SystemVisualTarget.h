#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class SystemVisualTarget {
public:
    class LayoutSync;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemVisualTarget@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemVisualTarget@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemVisualTarget@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SystemVisualTarget@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, void *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeRenderTarget@SystemVisualTarget@Composition@UI@Microsoft@@MEAAJPEAPEAVLocalAppRenderTarget@234@@Z
    virtual long MakeRenderTarget(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetHwndImpl@SystemVisualTarget@Composition@UI@Microsoft@@MEAAPEAUHWND__@@XZ
    virtual HWND__* OnGetHwndImpl();
};
} // namespace Microsoft::UI::Composition
