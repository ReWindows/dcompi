#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 5 member(s).
namespace Microsoft::UI::Composition::CommitCompletionWaiter {
class AsyncInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@AsyncInfo@CommitCompletionWaiter@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AsyncInfo@CommitCompletionWaiter@Composition@UI@Microsoft@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorCode@AsyncInfo@CommitCompletionWaiter@Composition@UI@Microsoft@@UEAAJPEAJ@Z
    virtual long get_ErrorCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@AsyncInfo@CommitCompletionWaiter@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@AsyncInfo@CommitCompletionWaiter@Composition@UI@Microsoft@@UEAAJPEAW4AsyncStatus@Foundation@Windows@ABI@@@Z
    virtual long get_Status(int *);
};
} // namespace Microsoft::UI::Composition::CommitCompletionWaiter
