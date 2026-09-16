#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 16 member(s).
namespace Microsoft::UI::Composition::CompositionAnimation {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllParameters@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJXZ
    virtual long ClearAllParameters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearParameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long ClearParameter(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBooleanParameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@E@Z
    virtual long SetBooleanParameter(HSTRING__*, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorParameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UColor@4Windows@@@Z
    virtual long SetColorParameter(HSTRING__*, ::Windows::UI::Color);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpressionReferenceParameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUIAnimationObject@345@@Z
    virtual long SetExpressionReferenceParameter(HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix3x2Parameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UMatrix3x2@Numerics@Foundation@Windows@@@Z
    virtual long SetMatrix3x2Parameter(HSTRING__*, ::Windows::Foundation::Numerics::Matrix3x2);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix4x4Parameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UMatrix4x4@Numerics@Foundation@Windows@@@Z
    virtual long SetMatrix4x4Parameter(HSTRING__*, ::Windows::Foundation::Numerics::Matrix4x4);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuaternionParameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UQuaternion@Numerics@Foundation@Windows@@@Z
    virtual long SetQuaternionParameter(HSTRING__*, ::Windows::Foundation::Numerics::Quaternion);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceParameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@PEAUICompositionObject@345@@Z
    virtual long SetReferenceParameter(HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarParameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@M@Z
    virtual long SetScalarParameter(HSTRING__*, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector2Parameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UVector2@Numerics@Foundation@Windows@@@Z
    virtual long SetVector2Parameter(HSTRING__*, ::Windows::Foundation::Numerics::Vector2);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector3Parameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UVector3@Numerics@Foundation@Windows@@@Z
    virtual long SetVector3Parameter(HSTRING__*, ::Windows::Foundation::Numerics::Vector3);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector4Parameter@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@UVector4@Numerics@Foundation@Windows@@@Z
    virtual long SetVector4Parameter(HSTRING__*, ::Windows::Foundation::Numerics::Vector4);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialValueExpressions@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z
    virtual long get_InitialValueExpressions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Target(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Target@Api@CompositionAnimation@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Target(HSTRING__*);
};
} // namespace Microsoft::UI::Composition::CompositionAnimation
