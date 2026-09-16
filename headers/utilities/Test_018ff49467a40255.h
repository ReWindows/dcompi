#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::CompositorCommon {
class Test {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInjectionAnimation@Test@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUIInjectionAnimationTest@345@@Z
    virtual long CreateInjectionAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLegacyAnimation@Test@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAPEAUIDCompositionAnimation@@@Z
    virtual long CreateLegacyAnimation(IDCompositionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLegacyAnimationInstance@Test@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCompositionAnimationInstancePartner@@@Z
    virtual long CreateLegacyAnimationInstance(IDCompositionAnimation *, IDCompositionAnimationInstancePartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpressionPostfixString@Test@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUIExpressionAnimation@345@PEAG_K@Z
    virtual long GetExpressionPostfixString(WindissectOpaque *, unsigned short *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceParameter@Test@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUIInspectable@@PEAUHSTRING__@@0@Z
    virtual long SetReferenceParameter(IInspectable *, HSTRING__*, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTracingCookie@Test@CompositorCommon@Composition@UI@Microsoft@@UEAAJPEAUIInspectable@@I@Z
    virtual long SetTracingCookie(IInspectable *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWaitForCommitCompletionEnabled@Test@CompositorCommon@Composition@UI@Microsoft@@UEAAJ_N@Z
    virtual long SetWaitForCommitCompletionEnabled(bool);
};
} // namespace Microsoft::UI::Composition::CompositorCommon
