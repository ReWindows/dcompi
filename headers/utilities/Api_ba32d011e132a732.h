#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 15 member(s).
namespace Microsoft::UI::Composition::CompositionObject {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfo@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@345@@Z
    virtual long PopulatePropertyInfo(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimation@345@@Z
    virtual long StartAnimation(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationGroup@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimationBase@345@@Z
    virtual long StartAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithController@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimation@345@PEAUIAnimationController@345@@Z
    virtual long StartAnimationWithController(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long StopAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimationGroup@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUICompositionAnimationBase@345@@Z
    virtual long StopAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAnimationController@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAPEAUIAnimationController@345@@Z
    virtual long TryGetAnimationController(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Comment@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Comment(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Compositor@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositor@345@@Z
    virtual long get_Compositor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAPEAUICoreDispatcher@Core@4Windows@@@Z
    virtual long get_Dispatcher(::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAPEAUIDispatcherQueue@Dispatching@45@@Z
    virtual long get_DispatcherQueue(::Microsoft::UI::Dispatching::IDispatcherQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ImplicitAnimations@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAPEAUIImplicitAnimationCollection@345@@Z
    virtual long get_ImplicitAnimations(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAPEAUICompositionPropertySet@345@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Comment@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Comment(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ImplicitAnimations@Api@CompositionObject@Composition@UI@Microsoft@@UEAAJPEAUIImplicitAnimationCollection@345@@Z
    virtual long put_ImplicitAnimations(WindissectOpaque *);
};
} // namespace Microsoft::UI::Composition::CompositionObject
