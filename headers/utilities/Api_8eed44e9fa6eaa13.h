#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::InitialValueExpressionCollectionMapView {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@InitialValueExpressionCollectionMapView@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@Api@InitialValueExpressionCollectionMapView@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@Api@InitialValueExpressionCollectionMapView@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z
    virtual long Lookup(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@Api@InitialValueExpressionCollectionMapView@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@0@Z
    virtual long Split(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@InitialValueExpressionCollectionMapView@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
};
} // namespace Microsoft::UI::Composition::InitialValueExpressionCollectionMapView
