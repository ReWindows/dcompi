#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 34 member(s).
namespace Microsoft::UI::Composition {
class VisualCommon {
public:
    class Api;
    class Partner;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLight@VisualCommon@Composition@UI@Microsoft@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z
    long AddLight(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualCommon@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableHeatMap@VisualCommon@Composition@UI@Microsoft@@QEAAXW4Enum@MilHeatMapMode@@AEBU_D3DCOLORVALUE@@W4CompositionDebugOverdrawContentKinds@Diagnostics@234@@Z
    void EnableHeatMap(int, _D3DCOLORVALUE const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@VisualCommon@Composition@UI@Microsoft@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@VisualCommon@Composition@UI@Microsoft@@UEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateNonDefaultPointerEventRouter@VisualCommon@Composition@UI@Microsoft@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z
    long GetOrCreateNonDefaultPointerEventRouter(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerNoRef@VisualCommon@Composition@UI@Microsoft@@QEAAPEAUIVisualOwnerPrivate@Private@234@XZ
    WindissectOpaque * GetOwnerNoRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@VisualCommon@Composition@UI@Microsoft@@QEAAJPEAVVisual@234@_N0@Z
    long InsertChild(WindissectOpaque *, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@VisualCommon@Composition@UI@Microsoft@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllChildren@VisualCommon@Composition@UI@Microsoft@@QEAAJXZ
    long RemoveAllChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@VisualCommon@Composition@UI@Microsoft@@QEAAJPEAVVisual@234@@Z
    long RemoveChild(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLight@VisualCommon@Composition@UI@Microsoft@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z
    long RemoveLight(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerEventRouter@VisualCommon@Composition@UI@Microsoft@@QEAAXXZ
    void RemovePointerEventRouter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSharedLight@VisualCommon@Composition@UI@Microsoft@@QEAAJPEAVSharedLight@Private@234@W4LightBehavior@234@@Z
    long RemoveSharedLight(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderMode@VisualCommon@Composition@UI@Microsoft@@QEAAJW4CompositionBorderMode@234@@Z
    long SetBorderMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@VisualCommon@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteraction@VisualCommon@Composition@UI@Microsoft@@QEAAXPEAVCompositionPointerEventRouter@234@@Z
    void SetInteraction(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentForTransform@VisualCommon@Composition@UI@Microsoft@@QEAAJPEAVVisual@234@@Z
    long SetParentForTransform(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransparentForInput@VisualCommon@Composition@UI@Microsoft@@QEAAX_N@Z
    void SetTransparentForInput(bool);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@VisualCommon@Composition@UI@Microsoft@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAllChildrenRemoved@VisualCommon@Composition@UI@Microsoft@@MEAAXXZ
    virtual void OnAllChildrenRemoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildAdded@VisualCommon@Composition@UI@Microsoft@@MEAAXPEAVVisual@234@0_N@Z
    virtual void OnChildAdded(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildRemoved@VisualCommon@Composition@UI@Microsoft@@MEAAXPEAVVisual@234@@Z
    virtual void OnChildRemoved(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualCommon@Composition@UI@Microsoft@@IEAAJPEAVCompositor@234@I_NPEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, bool, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@VisualCommon@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateChanges@VisualCommon@Composition@UI@Microsoft@@MEAAJXZ
    virtual long UpdateChanges();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@VisualCommon@Composition@UI@Microsoft@@AEAAJXZ
    long EnsureComponentTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_Opacity@VisualCommon@Composition@UI@Microsoft@@AEBAMXZ
    float GetSparse_Opacity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_RelativeOffsetAdjustment@VisualCommon@Composition@UI@Microsoft@@AEBA?AUVector3@Numerics@Foundation@Windows@@XZ
    ::Windows::Foundation::Numerics::Vector3 GetSparse_RelativeOffsetAdjustment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_RelativeSizeAdjustment@VisualCommon@Composition@UI@Microsoft@@AEBA?AUVector2@Numerics@Foundation@Windows@@XZ
    ::Windows::Foundation::Numerics::Vector2 GetSparse_RelativeSizeAdjustment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_Opacity@VisualCommon@Composition@UI@Microsoft@@AEAAXM@Z
    void SetSparse_Opacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_RelativeOffsetAdjustment@VisualCommon@Composition@UI@Microsoft@@AEAAXUVector3@Numerics@Foundation@Windows@@@Z
    void SetSparse_RelativeOffsetAdjustment(::Windows::Foundation::Numerics::Vector3);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_RelativeSizeAdjustment@VisualCommon@Composition@UI@Microsoft@@AEAAXUVector2@Numerics@Foundation@Windows@@@Z
    void SetSparse_RelativeSizeAdjustment(::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSharedLights@VisualCommon@Composition@UI@Microsoft@@AEAAJW4LightBehavior@234@@Z
    long UpdateSharedLights(int);
};
} // namespace Microsoft::UI::Composition
