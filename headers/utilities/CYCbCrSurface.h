#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 18 member(s).
namespace DirectComposition {
class CYCbCrSurface {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CYCbCrSurface@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CYCbCrSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, unsigned int, unsigned int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionYCbCrSurfaceProxy@CYCbCrSurface@DirectComposition@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetCompositionYCbCrSurfaceProxy(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidPixels@CYCbCrSurface@DirectComposition@@UEAAJPEAH@Z
    virtual long HasValidPixels(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CYCbCrSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelsDiscarded@CYCbCrSurface@DirectComposition@@UEAAXXZ
    virtual void PixelsDiscarded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelsReclaimed@CYCbCrSurface@DirectComposition@@UEAAJXZ
    virtual long PixelsReclaimed();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CYCbCrSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CYCbCrSurface@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SurfaceHidden@CYCbCrSurface@DirectComposition@@UEAAJXZ
    virtual long SurfaceHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContent@CYCbCrSurface@DirectComposition@@UEAAJAEBUtagRECT@@PEBXI01I@Z
    virtual long UpdateContent(tagRECT const &, void const *, unsigned int, tagRECT const &, void const *, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CYCbCrSurface@DirectComposition@@IEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z
    long Initialize(unsigned int, unsigned int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CYCbCrSurface@DirectComposition@@MEAA@XZ
    virtual ~CYCbCrSurface();
};
} // namespace DirectComposition
