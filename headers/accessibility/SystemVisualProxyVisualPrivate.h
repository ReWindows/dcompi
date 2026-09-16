#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition::Private {
class SystemVisualProxyVisualPrivate {
public:
    class Api;
    class Interop;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@QEBAJPEAPEAX@Z
    long GetHandle(void * *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@QEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemBorderMode@SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@QEAAJW4CompositionBorderMode@345@@Z
    long SetSystemBorderMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemVisualProxyVisualPrivate@Private@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~SystemVisualProxyVisualPrivate();
};
} // namespace Microsoft::UI::Composition::Private
