#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 12 member(s).
namespace Microsoft::UI::Composition {
class VisualCapture {
public:
    class AsyncBase;
    class AsyncOperation;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualCapture@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@VisualCapture@Composition@UI@Microsoft@@SAJPEAVCompositor@234@PEAPEAV1234@@Z
    static long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualCapture@Composition@UI@Microsoft@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@VisualCapture@Composition@UI@Microsoft@@UEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@VisualCapture@Composition@UI@Microsoft@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z
    long Initialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int, int, int, int, float, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualCapture@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualCapture@Composition@UI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@VisualCapture@Composition@UI@Microsoft@@UEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@VisualCapture@Composition@UI@Microsoft@@QEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Microsoft@@@Foundation@Windows@@@Z
    long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualCapture@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~VisualCapture();
};
} // namespace Microsoft::UI::Composition
