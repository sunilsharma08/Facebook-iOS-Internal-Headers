//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBOpenableAttachmentNode.h"

#import "FBDirectionalPanGestureRecognizerDelegate-Protocol.h"
#import "POPAnimationDelegate-Protocol.h"

@class ASDisplayNode, FBDirectionalPanGestureRecognizer, FBPinchGestureRecognizer, FBUnfoldableAnimationController, NSMutableSet, NSString, UITapGestureRecognizer;

@interface FBUnfoldableAttachmentNode : FBOpenableAttachmentNode <FBDirectionalPanGestureRecognizerDelegate, POPAnimationDelegate>
{
    unsigned int _openPivotEdge;
    BOOL _allowSingleFingerInteraction;
    BOOL _edgeAntialiasingEnabled;
    ASDisplayNode *_outsideCoverNode;
    ASDisplayNode *_outsideCoverShadowNode;
    ASDisplayNode *_perspectiveRootNode;
    ASDisplayNode *_coverContainerNode;
    ASDisplayNode *_insideCoverNode;
    ASDisplayNode *_insideCoverShadingNode;
    ASDisplayNode *_insideCoverFlatShadingNode;
    ASDisplayNode *_outsideCoverShadingNode;
    ASDisplayNode *_outsideCoverSpecularHighlightNode;
    ASDisplayNode *_outsideCoverSpecularHighlightClippingNode;
    ASDisplayNode *_insideOtherNode;
    ASDisplayNode *_insideOtherShadingNode;
    ASDisplayNode *_insideOtherFlatShadingNode;
    ASDisplayNode *_insideOtherInnerShadowNode;
    ASDisplayNode *_foldCrackNode;
    FBUnfoldableAnimationController *_animationController;
    CDUnknownBlockType _animationsCompletionBlock;
    int _previousTouchMode;
    int _currentTouchMode;
    double _touchModeTransitionTime;
    BOOL _hasUnlockedPanDirectionLocking;
    struct CGPoint _currentUnfoldTouchPoints[2];
    struct CGPoint _baseTouchCentroid;
    struct CGPoint _lastCoverTouchPoint;
    struct CGPoint _lastInsideOtherLayerTouchPoint;
    struct CGPoint _panGestureBeganVelocity;
    NSMutableSet *_nonGesturalTouches;
    FBDirectionalPanGestureRecognizer *_panGestureRecognizer;
    FBPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    struct CGPoint _originalSelfPosition;
    struct CGSize _originalSelfSize;
    struct CGRect _originalPerspectiveLayerFrame;
    struct _OriginalUnfoldableComponentLayerState *_originalCoverContainerLayerState;
    struct _OriginalUnfoldableComponentLayerState *_originalInsideOtherLayerState;
}

@property(copy, nonatomic) CDUnknownBlockType animationsCompletionBlock; // @synthesize animationsCompletionBlock=_animationsCompletionBlock;
@property(nonatomic) BOOL allowSingleFingerInteraction; // @synthesize allowSingleFingerInteraction=_allowSingleFingerInteraction;
@property(nonatomic) unsigned int openPivotEdge; // @synthesize openPivotEdge=_openPivotEdge;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_insideOtherCoverShadowLayerYScale;
- (float)_insideOtherCoverShadowLayerYOffset;
- (float)_insideOtherCoverShadowLayerOpacity;
- (float)_insideOtherFlatShadingLayerOpacity;
- (float)_outsideCoverSpecularHighlightLayerYScale;
- (float)_outsideCoverSpecularHighlightLayerYOffset;
- (float)_outsideCoverSpecularHighlightLayerOpacity;
- (float)_insideCoverFlatShadingLayerOpacity;
- (float)_insideOtherShadingLayerOpacity;
- (float)_outsideCoverShadingLayerOpacity;
- (float)_insideCoverShadingLayerOpacity;
- (float)_currentInsideCoverRotation;
- (float)_currentCoverRotation;
- (id)_hitTestableCoverLayer;
- (void)_resetTouchPoints;
- (void)_updateUnfoldTouchPointsWithTouchesFromGestureRecognizer:(id)arg1;
- (float)openedLayerVerticalOffset;
- (id)insideOtherContentNode;
- (id)insideCoverContentNode;
- (id)outsideCoverContentNode;
- (void)pop_animationDidReachToValue:(id)arg1;
- (void)animationDidApply:(id)arg1;
- (void)_lockFlapPositions;
- (void)pop_animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct CGPoint)_scaleFactorForFullscreen;
- (struct CGPoint)_verticallyOffsetOpenedOtherLayerCenter;
- (struct CGPoint)_verticallyOffsetOpenedCoverLayerCenter;
- (struct CGPoint)_perspectiveCenterPoint;
- (float)_excessOpenedHeight;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
- (struct CGSize)_closedSize;
- (void)_updateLayerShading;
- (void)_updateFoldCrack;
- (void)_updateAuxilaryUnfoldableComponents;
- (BOOL)_shouldUnlockHorizontalTranslation;
- (void)_adjustPositionAndRotationForUnfold;
- (void)_foldClosed:(BOOL)arg1;
- (void)_unfoldOpen:(BOOL)arg1;
- (BOOL)_shouldCloseForPanWithVelocity:(struct CGPoint)arg1;
- (void)_completePinchGesture:(id)arg1;
- (void)_completePanGesture:(id)arg1;
- (void)_cancelUnfoldGesture;
- (void)_updateUnfoldGesture;
- (void)_beginUnfoldGesture;
- (float)directionalPanGestureRecognizer:(id)arg1 maximumAllowableOpposingTranslationForDirection:(int)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleTap:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_simulateTouchPointsIfNecessary;
- (void)_applyOpenedLayerOffset;
- (void)_handlePinch:(id)arg1;
- (int)_activeTouchMode;
- (void)_updateTouchModeFromGestureRecognizer:(id)arg1;
- (id)foldingPanGestureRecognizer;
- (void)setGesturesEnabled:(BOOL)arg1;
- (void)_setupLayerContent;
- (void)_setupGestureRecognition;
- (void)_setupClosedStructure;
- (void)_deactivateUnfoldableStructure;
- (void)_activateUnfoldableStructure;
- (BOOL)_unfoldableStructureIsActive;
- (void)changedFromState:(unsigned int)arg1 toState:(unsigned int)arg2;
- (void)didClose;
- (id)dropShadowCastingLayers;
- (void)cleanUpAfterClosing;
- (void)prepareForOpening;
- (struct CGSize)openedSizeForOrientation:(int)arg1;
- (void)closeAnimated:(BOOL)arg1;
- (void)openAnimated:(BOOL)arg1;
- (void)_layoutForOpening;
- (void)layout;
- (void)didLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

