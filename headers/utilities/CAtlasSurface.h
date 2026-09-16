#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 17 member(s).
namespace DirectComposition {
class CAtlasSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTokenInformation@CAtlasSurface@DirectComposition@@QEAAJPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z
    long AddTokenInformation(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSatisfyLargeSurfaceRequest@CAtlasSurface@DirectComposition@@QEBA_NAEBUSurfaceRequestStruct@2@@Z
    bool CanSatisfyLargeSurfaceRequest(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitRendering@CAtlasSurface@DirectComposition@@QEAAXXZ
    void CommitRendering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, unsigned int, unsigned int, WindissectOpaque const &, DCOMPOSITION_GUTTERS, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z
    static long CreateWhitePixel(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z
    void EndDraw(ID2D1Bitmap *, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueGutterExtension@CAtlasSurface@DirectComposition@@QEAAJPEAUGutterExtension@2@@Z
    long EnqueueGutterExtension(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CAtlasSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CAtlasSurface@DirectComposition@@EEAAPEAVCDevice@2@XZ
    virtual WindissectOpaque * GetDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAtlasSurface@DirectComposition@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSynchronizedObject@2@@Z
    virtual void OnBeforeSynchronizationStateUpdated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reuse@CAtlasSurface@DirectComposition@@EEAAXXZ
    virtual void Reuse();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlasSurface@DirectComposition@@EEAA@XZ
    virtual ~CAtlasSurface();
};
} // namespace DirectComposition
