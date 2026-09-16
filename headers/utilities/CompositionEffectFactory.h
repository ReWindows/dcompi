#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 11 member(s).
namespace Microsoft::UI::Composition {
class CompositionEffectFactory {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionEffectFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionEffectFactory@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionEffectFactory@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionEffectFactory@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Microsoft@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@Windows@@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@9@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::Graphics::Effects::IGraphicsEffect *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionEffectFactory@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~CompositionEffectFactory();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@CompositionEffectFactory@Composition@UI@Microsoft@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionEffectFactory@Composition@UI@Microsoft@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Microsoft@@AEAAJXZ
    long MarshalEffectDescription();
};
} // namespace Microsoft::UI::Composition
