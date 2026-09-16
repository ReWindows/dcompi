#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 14 member(s).
class DirectComposition {
public:
    class CAffineTransform2DEffect;
    class CAnimationBuilder;
    class CAnimationData;
    class CAnimationInstance;
    class CAnimationProxy;
    class CArithmeticCompositeEffect;
    class CAtlasNode;
    class CAtlasSurface;
    class CAtlasSurfacePool;
    class CBitmapInfo;
    class CBitmapInfoBack;
    class CBitmapInfoFront;
    class CBlendEffect;
    class CBrightnessEffect;
    class CCaptureControllerProxy;
    class CCaptureRenderTargetProxy;
    class CClipProxy;
    class CColorMatrixEffect;
    class CCompositeEffect;
    class CCompositionSurface;
    class CCompositionSurfaceProxy;
    class CCompositorSynchronizedObject;
    class CCrossContainerGuestReadWriteSharedSection;
    class CCrossContainerHostReadOnlySharedAllocation;
    class CCrossContainerHostReadOnlySharedSection;
    class CCursorVisualProxy;
    class CD2DSharedBuffer;
    class CDDisplayRenderTargetProxy;
    class CDelayedDestructionObject;
    class CDesktopTreeProxy;
    class CDevice;
    class CDirtyNotifier;
    class CDxDevice;
    class CDynamicColorRectanglePrimitive;
    class CDynamicPool;
    class CDynamicPoolSet;
    class CEffectGroupProxy;
    class CFilterEffect;
    class CFilterEffectProxy;
    class CFloodEffect;
    class CGaussianBlurEffect;
    class CGdiSpriteBitmapProxy;
    class CGeneratedVirtualSurfacePrimitive;
    class CGenericInk;
    class CGenericInkProxy;
    class CHandleAllocator;
    class CHueRotationEffect;
    class CInkProxy;
    class CInteractionConfiguration;
    class CInteractionProxy;
    class CLegacyAnimationTrigger;
    class CLegacyRenderTargetProxy;
    class CLegacyStereoRenderTargetProxy;
    class CLinearTransferEffect;
    class CManipulationTransformProxy;
    class CMatrixTransform3DProxy;
    class CMatrixTransformProxy;
    class CMessageConversationHost;
    class CPrimitive;
    class CPrimitiveColorProxy;
    class CPrimitiveGroup;
    class CPrimitiveGroupProxy;
    class CProxySizer;
    class CProxySizerBase;
    class CProxyTable;
    class CReadCaptureControllerProxy;
    class CRebuildableObject;
    class CRectangleClipProxy;
    class CRegionClipProxy;
    class CRemoteAppRenderTargetProxy;
    class CRemoteRenderTargetProxy;
    class CResourceProxy;
    class CRotateTransform3DProxy;
    class CRotateTransformProxy;
    class CSaturationEffect;
    class CScalarProxy;
    class CScaleTransform3DProxy;
    class CScaleTransformProxy;
    class CScratchSurface;
    class CScratchSurfaceManager;
    class CShadowEffect;
    class CSharedAllocation;
    class CSharedAllocationBase;
    class CSharedManipulationTransformProxy;
    class CSharedSection;
    class CSharedSectionBase;
    class CSharedTransform3DProxy;
    class CSharedTransformProxy;
    class CSkewTransformProxy;
    class CSnapshotProxy;
    class CSolidColorRectanglePrimitive;
    class CSurfaceFactory;
    class CSurfaceManager;
    class CTableTransferEffect;
    class CTexturedRectanglePrimitive;
    class CTileClump;
    class CTransform3DGroupProxy;
    class CTransformGroupProxy;
    class CTranslateTransform3DProxy;
    class CTranslateTransformProxy;
    class CTurbulenceEffect;
    class CUnknownProxy;
    class CVirtualMonitorCaptureRenderTargetProxy;
    class CVirtualSurface;
    class CVirtualSurfaceOptimizer;
    class CVirtualSurfacePrimitive;
    class CVisualBitmapProxy;
    class CVisualGroupProxy;
    class CVisualProxy;
    class CVisualReferenceControllerProxy;
    class CVisualReferenceProxy;
    class CVisualTargetProxy;
    class CWindowNodeProxy;
    class CWriteCaptureControllerProxy;
    class CYCbCrBitmapInfo;
    class CYCbCrSurface;
    class CYCbCrSurfaceProxy;
    class Channel;
    class ClientUpdateLockAcquire;
    class ClientUpdateLockRelease;
    class LocalChannel;
    class MultithreadDeviceLock;
    class SizeU;
    class SwapDeviceContextState;
    class UnavailableRegion;
    class VideoMemoryBreakdown;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CResorceProxy_AddVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@H1@Z
    long CResorceProxy_AddVisual(WindissectOpaque *, IDCompositionVisual *, int, IDCompositionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CResorceProxy_QueryInterface@DirectComposition@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    long CResorceProxy_QueryInterface(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CResorceProxy_RemoveVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@@Z
    long CResorceProxy_RemoveVisual(WindissectOpaque *, IDCompositionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z
    long CResorceProxy_SetContent(WindissectOpaque *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CResorceProxy_SetEffect@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionEffect@@@Z
    long CResorceProxy_SetEffect(WindissectOpaque *, IDCompositionEffect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcScrollBltRects@DirectComposition@@YA_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@0HHPEAV2@1@Z
    bool CalcScrollBltRects(WindissectOpaque const &, WindissectOpaque const &, int, int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChannelCreate@DirectComposition@@YAJPEAIPEAPEAXPEAPEAVChannel@1@@Z
    long ChannelCreate(unsigned int *, void * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareClumpArea@DirectComposition@@YAHPEBX0@Z
    int CompareClumpArea(void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTransformedRectBoundsAxisAligned@DirectComposition@@YA?AUD2D_RECT_F@@AEBU2@AEBUD2D_MATRIX_3X2_F@@@Z
    D2D_RECT_F ComputeTransformedRectBoundsAxisAligned(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z
    bool InvertMatrix(D2D_MATRIX_3X2_F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedProxyDataFromIID@DirectComposition@@YAJAEBU_GUID@@PEAUSharedProxyData@1@@Z
    long SharedProxyDataFromIID(_GUID const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnionRectInternal@DirectComposition@@YA_NPEAUtagRECT@@PEBU2@1@Z
    bool UnionRectInternal(tagRECT *, tagRECT const *, tagRECT const *);
};
