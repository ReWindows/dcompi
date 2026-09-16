#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 47 member(s).
namespace Microsoft::UI::Composition {
class CompositorCommon {
public:
    class Api;
    class CaptureTest;
    class DCPrivate;
    class Native;
    class Partner;
    class Restricted;
    class Test;
    class VelocityPartnerProjectedShadow;
    class VelocityProjectedShadow;
    class Velocity_RadialGradient;
    class VisualSurface;
    class XUCPrivate;
    class XUCPrivate2;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Microsoft@@QEAAXPEAVProxyObject@234@I@Z
    void AddDeferredPropertyChangeNotification(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWeakReference@CompositorCommon@Composition@UI@Microsoft@@QEAAXPEAVCompositionObject@234@@Z
    void ClearWeakReference(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorGradientStop@CompositorCommon@Composition@UI@Microsoft@@QEAAJMAEBU_D3DCOLORVALUE@@PEAPEAVCompositionColorGradientStop@234@@Z
    long CreateColorGradientStop(float, _D3DCOLORVALUE const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCommitCompletionWaiter@CompositorCommon@Composition@UI@Microsoft@@QEAAJ_NPEAPEAVCommitCompletionWaiter@234@@Z
    long CreateCommitCompletionWaiter(bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurfaceForSwapChain@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@234@@Z
    long CreateCompositionSurfaceForSwapChain(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCubicBezierEasingFunction@CompositorCommon@Composition@UI@Microsoft@@QEAAJAEAUVector2@Numerics@Foundation@Windows@@0PEAPEAVCubicBezierEasingFunction@234@@Z
    long CreateCubicBezierEasingFunction(::Windows::Foundation::Numerics::Vector2&, ::Windows::Foundation::Numerics::Vector2&, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectFactory@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAUIGraphicsEffect@Effects@Graphics@Windows@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@8@PEAPEAVCompositionEffectFactory@234@@Z
    long CreateEffectFactory(::Windows::Graphics::Effects::IGraphicsEffect *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExpressionAnimation@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@PEAPEAVExpressionAnimation@234@@Z
    long CreateExpressionAnimation(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometricClip@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionGeometricClip@234@@Z
    long CreateGeometricClip(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInsetClip@CompositorCommon@Composition@UI@Microsoft@@QEAAJMMMMPEAPEAVInsetClip@234@@Z
    long CreateInsetClip(float, float, float, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearEasingFunction@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAPEAVLinearEasingFunction@234@@Z
    long CreateLinearEasingFunction(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePathGeometry@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAVCompositionPath@234@PEAPEAVCompositionPathGeometry@234@@Z
    long CreatePathGeometry(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertySet@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAPEAVCompositionPropertySet@234@@Z
    long CreatePropertySet(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleClip@CompositorCommon@Composition@UI@Microsoft@@QEAAJMMMMUVector2@Numerics@Foundation@Windows@@000PEAPEAVRectangleClip@234@@Z
    long CreateRectangleClip(float, float, float, float, ::Windows::Foundation::Numerics::Vector2, ::Windows::Foundation::Numerics::Vector2, ::Windows::Foundation::Numerics::Vector2, ::Windows::Foundation::Numerics::Vector2, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRedirectVisual@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAVVisual@234@PEAPEAVRedirectVisual@234@@Z
    long CreateRedirectVisual(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedTarget@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAPEAVVisualTarget@234@@Z
    long CreateSharedTarget(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisual@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAPEAVVisual@234@@Z
    long CreateSharedVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisualReferenceController@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z
    long CreateSharedVisualReferenceController(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSpriteShape@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionSpriteShape@234@@Z
    long CreateSpriteShape(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Microsoft@@QEAAJHPEAPEAVStepEasingFunction@234@@Z
    long CreateStepEasingFunctionWithStepCount(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualSurface@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAPEAVCompositionVisualSurface@234@@Z
    long CreateVisualSurface(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatchController@CompositorCommon@Composition@UI@Microsoft@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z
    void GetBatchController(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingManager@CompositorCommon@Composition@UI@Microsoft@@QEAAPEAVAnimationBindingManager@234@XZ
    WindissectOpaque * GetBindingManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultEasingFunction@CompositorCommon@Composition@UI@Microsoft@@QEAAPEAVCompositionEasingFunction@234@XZ
    WindissectOpaque * GetDefaultEasingFunction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Microsoft@@QEAAPEAVInteractionTrackerBindingManager@Interactions@234@XZ
    WindissectOpaque * GetInteractionTrackerBindingManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCommit_Callback@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAX@Z
    long InternalCommit_Callback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeOnSessionThread_NoLock@CompositorCommon@Composition@UI@Microsoft@@UEAAXP6AJPEAX@Z0@Z
    virtual void InvokeOnSessionThread_NoLock(long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBatchObjectCompleted@CompositorCommon@Composition@UI@Microsoft@@QEAAXW4CompositionBatchTypes@234@PEAUBatchMember@234@@Z
    void NotifyBatchObjectCompleted(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCompositionTexturesLost@CompositorCommon@Composition@UI@Microsoft@@UEAAXXZ
    virtual void NotifyCompositionTexturesLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedManipulationTransformFromHandle@CompositorCommon@Composition@UI@Microsoft@@QEAAJPEAXPEAPEAVManipulationTransform@234@@Z
    long OpenSharedManipulationTransformFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBatchObject@CompositorCommon@Composition@UI@Microsoft@@QEAAXW4CompositionBatchTypes@234@PEAUBatchMember@234@@Z
    void RegisterBatchObject(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Microsoft@@QEAAXPEAVProxyObject@234@I_N@Z
    void RemoveDeferredPropertyChangeNotification(WindissectOpaque *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnCallbackMessage_NoLock@CompositorCommon@Composition@UI@Microsoft@@SAJPEBX00I@Z
    static long s_OnCallbackMessage_NoLock(void const *, void const *, void const *, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositorCommon@Composition@UI@Microsoft@@IEAA@XZ
    CompositorCommon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositorCommon@Composition@UI@Microsoft@@MEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCommitNeeded_Callback@CompositorCommon@Composition@UI@Microsoft@@MEAAXXZ
    virtual void HandleCommitNeeded_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferStateTransition_Callback@CompositorCommon@Composition@UI@Microsoft@@MEAAX_N@Z
    virtual void NotifyDeferStateTransition_Callback(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@CompositorCommon@Composition@UI@Microsoft@@MEAAXXZ
    virtual void PostDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Microsoft@@IEAAJPEAUIDispatcherQueue@Dispatching@34@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z
    long RuntimeClassInitialize(::Microsoft::UI::Dispatching::IDispatcherQueue *, IUnknown *, WindissectOpaque *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositorCommon@Composition@UI@Microsoft@@MEAA@XZ
    virtual ~CompositorCommon();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitCompletionCallback@CompositorCommon@Composition@UI@Microsoft@@CAJPEAXK0@Z
    static long CommitCompletionCallback(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DummyMessageGroupCancelProc@CompositorCommon@Composition@UI@Microsoft@@CAJPEAX@Z
    static long DummyMessageGroupCancelProc(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedHandleFromIUnknown_NoLock@CompositorCommon@Composition@UI@Microsoft@@CAJPEAUIUnknown@@PEAPEAX@Z
    static long GetSharedHandleFromIUnknown_NoLock(IUnknown *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeakReferenceBase@CompositorCommon@Composition@UI@Microsoft@@AEAAJPEAVCompositionObject@234@PEAPEAVCWeakReferenceBase@@@Z
    long GetWeakReferenceBase(WindissectOpaque *, CWeakReferenceBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDeferredCallbacks_Callback@CompositorCommon@Composition@UI@Microsoft@@AEAAJXZ
    long InvokeDeferredCallbacks_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticCallCommit_NoLock@CompositorCommon@Composition@UI@Microsoft@@CAJPEAX@Z
    static long StaticCallCommit_NoLock(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_InvokeDeferredCallbacks_NoLock@CompositorCommon@Composition@UI@Microsoft@@CAJPEAX@Z
    static long Static_InvokeDeferredCallbacks_NoLock(void *);
};
} // namespace Microsoft::UI::Composition
