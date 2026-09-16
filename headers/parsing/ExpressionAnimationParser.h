#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcompi.dll by Windissect. 15 member(s).
namespace Microsoft::UI::Composition {
class ExpressionAnimationParser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Microsoft@@SAXPEAUHSTRING__@@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAPEAU5@@Z
    static void ParseTargetProperty(HSTRING__*, WindissectOpaque *, WindissectOpaque *, ExpressionObjectPropertyInfo *, int *, SubchannelMaskInfo * *, HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOperationToken@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJAEBUToken@1234@I@Z
    long ApplyOperationToken(WindissectOpaque const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrecedence@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAIW4TOKEN_TYPE@234@@Z
    unsigned int GetPrecedence(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseName@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJ_NIPEAGPEAI@Z
    long ParseName(bool, unsigned int, unsigned short *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParsePropertyName@ExpressionAnimationParser@Composition@UI@Microsoft@@CAXPEAUHSTRING__@@W4AnimationBindingDirection@234@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAH@Z
    static void ParsePropertyName(HSTRING__*, int, WindissectOpaque *, WindissectOpaque *, ExpressionObjectPropertyInfo *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseSwizzle@ExpressionAnimationParser@Composition@UI@Microsoft@@CAXPEBGIW4DCOMPOSITION_EXPRESSION_TYPE@@_NPEAUExpressionErrorInfo@234@PEAPEAVSubchannelMaskInfo@@PEAI@Z
    static void ParseSwizzle(unsigned short const *, unsigned int, int, bool, WindissectOpaque *, SubchannelMaskInfo * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessArgumentSeperatorToken@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJXZ
    long ProcessArgumentSeperatorToken();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessComparisonToken@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJXZ
    long ProcessComparisonToken();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessConstantParameterToken@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJPEBGII_N@Z
    long ProcessConstantParameterToken(unsigned short const *, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEndPrecedenceToken@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJXZ
    long ProcessEndPrecedenceToken();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFinalValueParameter@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJXZ
    long ProcessFinalValueParameter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessOperatorToken@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJW4TOKEN_TYPE@234@I@Z
    long ProcessOperatorToken(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessScalarToken@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJ_N@Z
    long ProcessScalarToken(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSwizzleToken@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAJXZ
    long ProcessSwizzleToken();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParseError@ExpressionAnimationParser@Composition@UI@Microsoft@@AEAAXW4ExpressionErrorKind@234@IIPEBG@Z
    void SetParseError(int, unsigned int, unsigned int, unsigned short const *);
};
} // namespace Microsoft::UI::Composition
