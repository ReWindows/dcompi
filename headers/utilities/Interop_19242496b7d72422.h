#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition::CompositionVirtualDrawingSurface {
class Interop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z
    virtual long BeginDraw(tagRECT const *, _GUID const &, void * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithGutters@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z
    virtual long BeginDrawWithGutters(tagRECT const *, _GUID const &, void * *, tagPOINT *, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z
    virtual long CopySurface(IUnknown *, int, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z
    virtual long CopySurface(tagRECT const *, IDXGISurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJXZ
    virtual long EndDraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidPixels@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEAH@Z
    virtual long HasValidPixels(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJUtagSIZE@@@Z
    virtual long Resize(tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJXZ
    virtual long ResumeDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJPEBUtagRECT@@0HH@Z
    virtual long Scroll(tagRECT const *, tagRECT const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Microsoft@@UEAAJXZ
    virtual long SuspendDraw();
};
} // namespace Microsoft::UI::Composition::CompositionVirtualDrawingSurface
