#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::AnimationController {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@Api@AnimationController@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@Api@AnimationController@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaybackRate@Api@AnimationController@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_PlaybackRate(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@Api@AnimationController@Composition@UI@Microsoft@@UEAAJPEAM@Z
    virtual long get_Progress(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgressBehavior@Api@AnimationController@Composition@UI@Microsoft@@UEAAJPEAW4AnimationControllerProgressBehavior@345@@Z
    virtual long get_ProgressBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlaybackRate@Api@AnimationController@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_PlaybackRate(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Progress@Api@AnimationController@Composition@UI@Microsoft@@UEAAJM@Z
    virtual long put_Progress(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProgressBehavior@Api@AnimationController@Composition@UI@Microsoft@@UEAAJW4AnimationControllerProgressBehavior@345@@Z
    virtual long put_ProgressBehavior(int);
};
} // namespace Microsoft::UI::Composition::AnimationController
