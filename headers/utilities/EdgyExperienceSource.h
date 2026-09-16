#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 10 member(s).
namespace Microsoft::UI::Composition::Interactions::Internal {
class EdgyExperienceSource {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEdgyDetected_Callback@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAXPEBUEdgyDetectedParams@@@Z
    virtual void NotifyEdgyDetected_Callback(EdgyDetectedParams const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEdgyDetectedHandler@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@QEAAJUEventRegistrationToken@@@Z
    long RemoveEdgyDetectedHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@PEAVVisual@456@@Z
    long RuntimeClassInitialize(HSTRING__*, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EdgyExperienceSource@Internal@Interactions@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~EdgyExperienceSource();
};
} // namespace Microsoft::UI::Composition::Interactions::Internal
