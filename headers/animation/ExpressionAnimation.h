#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition {
class ExpressionAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ExpressionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ExpressionAnimation@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpression@ExpressionAnimation@Composition@UI@Microsoft@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetExpression(HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ExpressionAnimation@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ExpressionAnimation@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpression@ExpressionAnimation@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@@Z
    long SetExpression(HSTRING__*);
};
} // namespace Microsoft::UI::Composition
