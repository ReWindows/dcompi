#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition::CommitCompletionWaiter {
class AsyncAction {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@AsyncAction@CommitCompletionWaiter@Composition@UI@Microsoft@@UEAAJXZ
    virtual long GetResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@AsyncAction@CommitCompletionWaiter@Composition@UI@Microsoft@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z
    virtual long get_Completed(::Windows::Foundation::IAsyncActionCompletedHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@AsyncAction@CommitCompletionWaiter@Composition@UI@Microsoft@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z
    virtual long put_Completed(::Windows::Foundation::IAsyncActionCompletedHandler *);
};
} // namespace Microsoft::UI::Composition::CommitCompletionWaiter
