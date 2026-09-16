#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 24 member(s).
namespace DirectComposition {
class CBitmapInfoFront {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapInfoFront@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z
    void ApplyUpdate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ
    long CommitUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z
    virtual void CopySurface(ID3D11Resource *, unsigned int, unsigned int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_NPEAPEAV12@@Z
    static long Create(WindissectOpaque *, unsigned int, unsigned int, int, int, int *, IDCompositionSurface *, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z
    long CreateFlipUpdate(IDCompositionSurface *, tagRECT const &, WindissectOpaque * *, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAUIDCompositionSurface@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z
    long CreateInPlaceUpdate(tagRECT const &, int, IDCompositionSurface *, WindissectOpaque * *, DCOMPOSITION_GUTTERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CBitmapInfoFront@DirectComposition@@UEBA?AW4Enum@NotifierType@2@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceHidden@CBitmapInfoFront@DirectComposition@@UEAAJXZ
    virtual long HandleSurfaceHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceReclaimed@CBitmapInfoFront@DirectComposition@@UEAAJ_N0@Z
    virtual long HandleSurfaceReclaimed(bool, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapInfoFront@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z
    long Resize(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapInfoFront@DirectComposition@@UEAA@XZ
    virtual ~CBitmapInfoFront();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapInfoFront@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_N@Z
    CBitmapInfoFront(WindissectOpaque *, unsigned int, unsigned int, int, int, int *, IDCompositionSurface *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAAXXZ
    void ClearPreviousSurfaceList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAA_NPEAUSurfaceAndDirty@12@@Z
    bool ProcessPreviousSurfaceList(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCurrentSurface@CBitmapInfoFront@DirectComposition@@AEAAXXZ
    void ReleaseCurrentSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z
    long RequestSurface(unsigned int, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z
    void UnuseSurface(WindissectOpaque *, tagRECT const &);
};
} // namespace DirectComposition
