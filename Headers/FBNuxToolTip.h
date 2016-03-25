//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNuxStep-Protocol.h"

@class NSArray, NSString, UIView;
@protocol FBNuxStep;

@interface FBNuxToolTip : NSObject <FBNuxStep>
{
    BOOL _allowsGoingBackward;
    BOOL _padShowFullScreenInterstitialInSheet;
    BOOL _isNubOnTop;
    UIView *_view;
    id <FBNuxStep> _nextStep;
    float _nuxViewYOffset;
    int _transitionAction;
    float _previousStepViewHeight;
    unsigned int _allowedArrowDirections;
    CDUnknownBlockType _viewProvider;
    CDUnknownBlockType _hightlightedRegionsProvider;
    id <FBNuxStep> _firstSubStep;
    int _containerType;
    int _userTransitionAction;
    float _dimAlpha;
    NSString *_title;
    NSString *_body;
    UIView *_thumbnailView;
    UIView *_bodyContentView;
    unsigned int _toolTipType;
    float _maxWidth;
    NSArray *_passthroughViews;
    id <FBNuxStep> _previousStep;
    struct CGPoint _arrowPositionInWindow;
    double _duration;
    struct UIEdgeInsets _insetsFromWindow;
    struct UIEdgeInsets _insetsForContent;
}

+ (id)participationModalTooltipWithTitle:(id)arg1 body:(id)arg2 forView:(id)arg3 hightlightedRegionsProvider:(CDUnknownBlockType)arg4;
+ (id)informativeLightTooltipNoDimmingWithTitle:(id)arg1 body:(id)arg2 forView:(id)arg3;
+ (id)tooltipWithTitle:(id)arg1 forView:(id)arg2;
+ (id)modalTooltipWithTitle:(id)arg1 body:(id)arg2 forView:(id)arg3;
+ (id)informativeTooltipWithContent:(id)arg1 forView:(id)arg2;
@property(nonatomic) __weak id <FBNuxStep> previousStep; // @synthesize previousStep=_previousStep;
@property(nonatomic) BOOL isNubOnTop; // @synthesize isNubOnTop=_isNubOnTop;
@property(retain, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) unsigned int toolTipType; // @synthesize toolTipType=_toolTipType;
@property(retain, nonatomic) UIView *bodyContentView; // @synthesize bodyContentView=_bodyContentView;
@property(retain, nonatomic) UIView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) float dimAlpha; // @synthesize dimAlpha=_dimAlpha;
@property(nonatomic) int userTransitionAction; // @synthesize userTransitionAction=_userTransitionAction;
@property(nonatomic) BOOL padShowFullScreenInterstitialInSheet; // @synthesize padShowFullScreenInterstitialInSheet=_padShowFullScreenInterstitialInSheet;
@property(readonly, nonatomic) int containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) id <FBNuxStep> firstSubStep; // @synthesize firstSubStep=_firstSubStep;
@property(copy, nonatomic) CDUnknownBlockType hightlightedRegionsProvider; // @synthesize hightlightedRegionsProvider=_hightlightedRegionsProvider;
@property(copy, nonatomic) CDUnknownBlockType viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) BOOL allowsGoingBackward; // @synthesize allowsGoingBackward=_allowsGoingBackward;
@property(nonatomic) unsigned int allowedArrowDirections; // @synthesize allowedArrowDirections=_allowedArrowDirections;
@property(nonatomic) struct UIEdgeInsets insetsForContent; // @synthesize insetsForContent=_insetsForContent;
@property(nonatomic) struct UIEdgeInsets insetsFromWindow; // @synthesize insetsFromWindow=_insetsFromWindow;
@property(nonatomic) float previousStepViewHeight; // @synthesize previousStepViewHeight=_previousStepViewHeight;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) float nuxViewYOffset; // @synthesize nuxViewYOffset=_nuxViewYOffset;
@property(nonatomic) struct CGPoint arrowPositionInWindow; // @synthesize arrowPositionInWindow=_arrowPositionInWindow;
@property(retain, nonatomic) id <FBNuxStep> nextStep; // @synthesize nextStep=_nextStep;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
@property(nonatomic) int transitionAction; // @synthesize transitionAction=_transitionAction;
@property(readonly, nonatomic) BOOL dimBackground;
- (id)init;
- (Class)popoverBorderViewClass;
- (Class)viewControllerClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) int navigationControllerTransitionStyle;
@property(readonly) Class superclass;

@end

