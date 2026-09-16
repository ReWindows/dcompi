#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 3 member(s).
namespace Microsoft::UI::Composition {
class PropertyValueHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSingle@PropertyValueHelper@Composition@UI@Microsoft@@SAJMPEAPEAUIPropertyValue@Foundation@Windows@@@Z
    static long CreateSingle(float, ::Windows::Foundation::IPropertyValue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSingleArray@PropertyValueHelper@Composition@UI@Microsoft@@SAJHPEBMPEAPEAUIPropertyValue@Foundation@Windows@@@Z
    static long CreateSingleArray(int, float const *, ::Windows::Foundation::IPropertyValue * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueStatics@PropertyValueHelper@Composition@UI@Microsoft@@CAPEAUIPropertyValueStatics@Foundation@Windows@@XZ
    static ::Windows::Foundation::IPropertyValueStatics * GetPropertyValueStatics();
};
} // namespace Microsoft::UI::Composition
