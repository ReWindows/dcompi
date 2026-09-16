#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::CursorVisual {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCursorId@Partner@CursorVisual@Composition@UI@Microsoft@@UEAAJPEA_K@Z
    virtual long GetCursorId(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsHardwareCursorEnabled@Partner@CursorVisual@Composition@UI@Microsoft@@UEAAJPEA_N@Z
    virtual long GetIsHardwareCursorEnabled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHardwareCursorEnabled@Partner@CursorVisual@Composition@UI@Microsoft@@UEAAJ_N@Z
    virtual long SetIsHardwareCursorEnabled(bool);
};
} // namespace Microsoft::UI::Composition::CursorVisual
