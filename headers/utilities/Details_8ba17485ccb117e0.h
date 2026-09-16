#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 55 member(s).
namespace Microsoft::WRL {
class Details {
public:
    class EventTargetArray;
    class ModuleBase;
    class WeakReferenceImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z
    WindissectOpaque * CreateWeakReference(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z
    long GetCacheEntry(WindissectOpaque *, unsigned int *, _GUID const &, WindissectOpaque const *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z
    void RaiseException(long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z
    bool TerminateMap(WindissectOpaque *, unsigned short const *, bool);
};
} // namespace Microsoft::WRL
