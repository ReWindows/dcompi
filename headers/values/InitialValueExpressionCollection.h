#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition {
class InitialValueExpressionCollection {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@InitialValueExpressionCollection@Composition@UI@Microsoft@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@InitialValueExpressionCollection@Composition@UI@Microsoft@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@InitialValueExpressionCollection@Composition@UI@Microsoft@@QEAA_NPEAUHSTRING__@@@Z
    bool HasKey(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@InitialValueExpressionCollection@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@0PEAE@Z
    long Insert(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@InitialValueExpressionCollection@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z
    long Lookup(HSTRING__*, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InitialValueExpressionCollection@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@InitialValueExpressionCollection@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@@Z
    long Remove(HSTRING__*);
};
} // namespace Microsoft::UI::Composition
