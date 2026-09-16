#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 21 member(s).
namespace Microsoft::UI::Composition::Private {
class TransformInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TransformInformation@Private@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TransformInformation@Private@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TransformInformation@Private@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TransformInformation@Private@Composition@UI@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TransformInformation@Private@Composition@UI@Microsoft@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TransformInformation@Private@Composition@UI@Microsoft@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TransformInformation@Private@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TransformInformation@Private@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TransformInformation@Private@Composition@UI@Microsoft@@UEAAJPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplaySizePhysicalPixels@TransformInformation@Private@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_DisplaySizePhysicalPixels(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScreenPhysicalPixelsToHimetricScaleFactor@TransformInformation@Private@Composition@UI@Microsoft@@UEAAJPEAUVector2@Numerics@Foundation@Windows@@@Z
    virtual long get_ScreenPhysicalPixelsToHimetricScaleFactor(::Windows::Foundation::Numerics::Vector2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualRelativePixelsToScreenPhysicalPixelsRotation@TransformInformation@Private@Composition@UI@Microsoft@@UEAAJPEAUVector3@Numerics@Foundation@Windows@@@Z
    virtual long get_VisualRelativePixelsToScreenPhysicalPixelsRotation(::Windows::Foundation::Numerics::Vector3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualRelativePixelsToScreenPhysicalPixelsScale@TransformInformation@Private@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_VisualRelativePixelsToScreenPhysicalPixelsScale(float *);
};
} // namespace Microsoft::UI::Composition::Private
