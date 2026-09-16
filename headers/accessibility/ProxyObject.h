#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 52 member(s).
namespace Microsoft::UI::Composition {
class ProxyObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectAnimation@ProxyObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long DisconnectAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenForPropertyChange@ProxyObject@Composition@UI@Microsoft@@QEAAJIPEAV1234@PEAUIExpCompositionPropertyChangedListener@Experimental@234@W4PropertyChangeNotificationOption@1234@@Z
    long ListenForPropertyChange(unsigned int, WindissectOpaque *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@ProxyObject@Composition@UI@Microsoft@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z
    long NotifyPropertyChanged(unsigned int, int, WindissectOpaque, unsigned int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComment@ProxyObject@Composition@UI@Microsoft@@UEAAXPEAUHSTRING__@@@Z
    virtual void SetComment(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationGroup@ProxyObject@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimationBase@234@@Z
    virtual long StartAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithController@ProxyObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAVAnimationController@234@@Z
    virtual long StartAnimationWithController(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@ProxyObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long StopAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimationGroup@ProxyObject@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimationBase@234@@Z
    virtual long StopAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyAnimator@ProxyObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z
    virtual long TryGetPropertyAnimator(HSTRING__*, WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ProxyObject@Composition@UI@Microsoft@@MEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfoImpl@ProxyObject@Composition@UI@Microsoft@@IEBA_NPEAUHSTRING__@@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Microsoft@@$0?0@gsl@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    bool GetAnimatablePropertyInfoImpl(HSTRING__*, WindissectOpaque const &, int *, ExpressionObjectPropertyInfo *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@ProxyObject@Composition@UI@Microsoft@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@ProxyObject@Composition@UI@Microsoft@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@ProxyObject@Composition@UI@Microsoft@@MEAAXXZ
    virtual void PostDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ProxyObject@Composition@UI@Microsoft@@IEAAJPEAVCompositor@234@IPEAX_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, void *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ProxyObject@Composition@UI@Microsoft@@IEAAJPEAVCompositor@234@I_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameterHelper@ProxyObject@Composition@UI@Microsoft@@IEAA_NPEAUHSTRING__@@0PEAVCompositionAnimation@234@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Microsoft@@$0?0@gsl@@@Z
    bool SetFinalValueParameterHelper(HSTRING__*, HSTRING__*, WindissectOpaque *, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Microsoft@@IEAAXIIIPEAVCSharedAllocationBase@DirectComposition@@_K@Z
    void SetSharedSectionReferenceProperties(unsigned int, unsigned int, unsigned int, WindissectOpaque *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Microsoft@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Microsoft@@$0?0@gsl@@@Z
    bool UpdateAnimatedProperty(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokePropertyChange_Callback@ProxyObject@Composition@UI@Microsoft@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBX@Z
    void InvokePropertyChange_Callback(int, unsigned int, void const *);
};
} // namespace Microsoft::UI::Composition
