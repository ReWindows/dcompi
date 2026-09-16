#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 18 member(s).
namespace Microsoft::UI::Composition::CompositionPropertySet {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertBoolean@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@E@Z
    virtual long InsertBoolean(HSTRING__*, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertColor@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UColor@4Windows@@@Z
    virtual long InsertColor(HSTRING__*, ::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMatrix3x2@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UMatrix3x2@Numerics@Foundation@Windows@@@Z
    virtual long InsertMatrix3x2(HSTRING__*, ::Windows::Foundation::Numerics::Matrix3x2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMatrix4x4@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UMatrix4x4@Numerics@Foundation@Windows@@@Z
    virtual long InsertMatrix4x4(HSTRING__*, ::Windows::Foundation::Numerics::Matrix4x4);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertQuaternion@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UQuaternion@Numerics@Foundation@Windows@@@Z
    virtual long InsertQuaternion(HSTRING__*, ::Windows::Foundation::Numerics::Quaternion);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertScalar@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@M@Z
    virtual long InsertScalar(HSTRING__*, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector2@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UVector2@Numerics@Foundation@Windows@@@Z
    virtual long InsertVector2(HSTRING__*, ::Windows::Foundation::Numerics::Vector2);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector3@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UVector3@Numerics@Foundation@Windows@@@Z
    virtual long InsertVector3(HSTRING__*, ::Windows::Foundation::Numerics::Vector3);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector4@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UVector4@Numerics@Foundation@Windows@@@Z
    virtual long InsertVector4(HSTRING__*, ::Windows::Foundation::Numerics::Vector4);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBoolean@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAEPEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetBoolean(HSTRING__*, unsigned char *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetColor@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUColor@4Windows@@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetColor(HSTRING__*, ::Windows::UI::Color *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMatrix3x2@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUMatrix3x2@Numerics@Foundation@Windows@@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetMatrix3x2(HSTRING__*, ::Windows::Foundation::Numerics::Matrix3x2*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMatrix4x4@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUMatrix4x4@Numerics@Foundation@Windows@@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetMatrix4x4(HSTRING__*, ::Windows::Foundation::Numerics::Matrix4x4*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetQuaternion@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUQuaternion@Numerics@Foundation@Windows@@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetQuaternion(HSTRING__*, ::Windows::Foundation::Numerics::Quaternion *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScalar@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAMPEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetScalar(HSTRING__*, float *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVector2@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUVector2@Numerics@Foundation@Windows@@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetVector2(HSTRING__*, ::Windows::Foundation::Numerics::Vector2*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVector3@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUVector3@Numerics@Foundation@Windows@@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetVector3(HSTRING__*, ::Windows::Foundation::Numerics::Vector3*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVector4@Api@CompositionPropertySet@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUVector4@Numerics@Foundation@Windows@@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetVector4(HSTRING__*, ::Windows::Foundation::Numerics::Vector4*, int *);
};
} // namespace Microsoft::UI::Composition::CompositionPropertySet
