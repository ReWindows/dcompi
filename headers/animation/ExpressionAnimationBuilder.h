#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 54 member(s).
namespace Microsoft::UI::Composition {
class ExpressionAnimationBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Conditional@ExpressionAnimationBuilder@Composition@UI@Microsoft@@QEAAJPEAV1234@0@Z
    long Conditional(WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExpressionAnimationBuilder@Composition@UI@Microsoft@@QEAA@PEAVExpressionAnimation@123@@Z
    ExpressionAnimationBuilder(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Microsoft@@QEAAJM@Z
    long PushConstant(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Microsoft@@QEAAJ_N@Z
    long PushConstant(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long PushConstantParameter(HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Microsoft@@QEAAJPEAUHSTRING__@@0W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z
    long PushReferenceParameter(HSTRING__*, HSTRING__*, int, SubchannelMaskInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ExpressionAnimationBuilder@Composition@UI@Microsoft@@QEAAJXZ
    long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@ExpressionAnimationBuilder@Composition@UI@Microsoft@@QEAAJPEAG_K@Z
    long ToString(unsigned short *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExpressionAnimationBuilder@Composition@UI@Microsoft@@QEAA@XZ
    ~ExpressionAnimationBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJW4ExpressionNodeType@@PEAPEAUExpressionNode@@@Z
    long AllocateNodeInBuffer(int, ExpressionNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateParameterNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAPEAUExpressionParameterNode@234@PEAPEAUExpressionParameter@234@@Z
    long AllocateParameterNodeInBuffer(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJW4ExpressionNodeType@@I@Z
    long ApplySimpleOperation(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInvalidFunctionArgumentContext@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAXIPEAGI@Z
    void CreateInvalidFunctionArgumentContext(unsigned int, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeallocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAXPEAUExpressionNode@@@Z
    void DeallocateNodeInBuffer(ExpressionNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveNodesInfo@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAXPEAI@Z
    void ResolveNodesInfo(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAddSubtract@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateAddSubtract(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateClamp@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateClamp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateColorLerp@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateColorLerp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateConcatenate@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateConcatenate(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDistance@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateDistance(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDivide@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateDivide(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateEqualityComparison@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateEqualityComparison(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateLerp@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateLerp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix3x2FromScale@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix3x2FromScale(unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix3x2FromSkew@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix3x2FromSkew(unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromAxisAngle@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromAxisAngle(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromPerspective@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromPerspective(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromPerspectiveOffCenter@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromPerspectiveOffCenter(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromScale@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromScale(unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromTranslation@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJIPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromTranslation(unsigned int, unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMatrix4x4FromYawPitchRoll@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMatrix4x4FromYawPitchRoll(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMinMax@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMinMax(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateMultiply@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateMultiply(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateNegate@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateNegate(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePow@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidatePow(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQuaternionFromAxisAngle@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateQuaternionFromAxisAngle(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQuaternionFromLerp@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateQuaternionFromLerp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateQuaternionFromYawPitchRoll@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateQuaternionFromYawPitchRoll(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateScale@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateScale(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSlerp@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateSlerp(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateStackElementsAreOfType@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateStackElementsAreOfType(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSwizzle@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJW4ExpressionNodeType@@PEBVSubchannelMaskInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateSwizzle(int, SubchannelMaskInfo const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTransform@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateTransform(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector2Dot@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector2Dot(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector2Transform@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector2Transform(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector2TransformNormal@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector2TransformNormal(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector3Cross@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector3Cross(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector3Dot@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector3Dot(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector3Transform@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector3Transform(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector3TransformNormal@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector3TransformNormal(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector4Dot@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector4Dot(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVector4Transform@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAIPEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateVector4Transform(unsigned int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteConstantParameterToBuffer@ExpressionAnimationBuilder@Composition@UI@Microsoft@@AEAAJPEAE_KPEAUExpressionParameter@234@PEAVCompositionAnimation@234@PEAI@Z
    long WriteConstantParameterToBuffer(unsigned char *, uint64_t, WindissectOpaque *, WindissectOpaque *, unsigned int *);
};
} // namespace Microsoft::UI::Composition
