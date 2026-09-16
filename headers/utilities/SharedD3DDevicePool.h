#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::Internal {
class SharedD3DDevicePool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Microsoft@@QEAAJPEAUIUnknown@@U_LUID@@PEAPEAUID3D11Device@@@Z
    long CreateSharedDevice(IUnknown *, _LUID, ID3D11Device * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Microsoft@@SAPEAV12345@XZ
    static WindissectOpaque * Instance();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedD3DDevicePool@Internal@Composition@UI@Microsoft@@QEAA@XZ
    ~SharedD3DDevicePool();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Microsoft@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z
    long CreateNewDevice(_LUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EraseSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Microsoft@@AEAAXU_LUID@@PEAUID3D11Device@@PEAPEAUSharedDevice@12345@@Z
    void EraseSharedDevice(_LUID, ID3D11Device *, WindissectOpaque * *);
};
} // namespace Microsoft::UI::Composition::Internal
