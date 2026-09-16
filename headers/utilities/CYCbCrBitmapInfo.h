#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 6 member(s).
namespace DirectComposition {
class CYCbCrBitmapInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAVCYCbCrSurface@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceHidden@CYCbCrBitmapInfo@DirectComposition@@UEAAJXZ
    virtual long HandleSurfaceHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceReclaimed@CYCbCrBitmapInfo@DirectComposition@@UEAAJ_N0@Z
    virtual long HandleSurfaceReclaimed(bool, bool);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CYCbCrBitmapInfo@DirectComposition@@MEAA@XZ
    virtual ~CYCbCrBitmapInfo();
};
} // namespace DirectComposition
