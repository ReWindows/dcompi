#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::InitialValueExpressionCollection {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Api@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@Api@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@Api@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Api@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long Insert(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@Api@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z
    virtual long Lookup(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
};
} // namespace Microsoft::UI::Composition::InitialValueExpressionCollection
