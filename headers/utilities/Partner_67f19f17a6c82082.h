#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 29 member(s).
namespace Microsoft::UI::Composition::VisualCommon {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachMouseDragToHwnd@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJ_JE@Z
    virtual long AttachMouseDragToHwnd(int64_t, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachMouseWheelToHwnd@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJ_JE@Z
    virtual long AttachMouseWheelToHwnd(int64_t, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAsync@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@PEAUICompositionGraphicsDevice@345@HHW4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@9Graphics@5@PEAPEAU?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Microsoft@@@Foundation@Windows@@@Z
    virtual long CaptureAsync(WindissectOpaque *, WindissectOpaque *, int, int, int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosedEventHandle@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEA_J@Z
    virtual long GetClosedEventHandle(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputSinkHandle@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEA_J@Z
    virtual long GetInputSinkHandle(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateNonDefaultPointerEventRouter@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionInteractionPartner@345@@Z
    virtual long GetOrCreateNonDefaultPointerEventRouter(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerEventRouter@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionInteractionPartner@345@@Z
    virtual long GetPointerEventRouter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkBoundary@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long MarkBoundary(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkCloseProtected@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long MarkCloseProtected(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerEventRouter@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJXZ
    virtual long RemovePointerEventRouter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputSinkHandle@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJ_J@Z
    virtual long SetInputSinkHandle(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteraction@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAUICompositionInteractionPartner@345@@Z
    virtual long SetInteraction(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwnerNoRef@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAUIVisualOwnerPrivate@Private@345@E@Z
    virtual long SetOwnerNoRef(WindissectOpaque *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentForTransformFromReference@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAUIVisualReference@Internal@345@@Z
    virtual long SetParentForTransformFromReference(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedManipulationTransform@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAUICompositionManipulationTransformPartner@345@@Z
    virtual long SetSharedManipulationTransform(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformParent@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAUIVisual@345@@Z
    virtual long SetTransformParent(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowBackgroundTreatment@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long SetWindowBackgroundTreatment(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DepthMode@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAW4CompositionDepthMode@Private@345@@Z
    virtual long get_DepthMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisconnectChildrenOnDestroy@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_DisconnectChildrenOnDestroy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTransparentForInput@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_IsTransparentForInput(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProtectContents@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAE@Z
    virtual long get_ProtectContents(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizationScaleOverride@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_RasterizationScaleOverride(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpVectorOverride@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_UpVectorOverride(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DepthMode@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJW4CompositionDepthMode@Private@345@@Z
    virtual long put_DepthMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisconnectChildrenOnDestroy@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_DisconnectChildrenOnDestroy(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTransparentForInput@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_IsTransparentForInput(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProtectContents@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJE@Z
    virtual long put_ProtectContents(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RasterizationScaleOverride@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_RasterizationScaleOverride(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UpVectorOverride@Partner@VisualCommon@Composition@UI@Microsoft@@UEAAJUVector3@Numerics@Foundation@Windows@@@Z
    virtual long put_UpVectorOverride(::Windows::Foundation::Numerics::Vector3);
};
} // namespace Microsoft::UI::Composition::VisualCommon
