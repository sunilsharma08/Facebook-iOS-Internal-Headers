//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;
@protocol FBFlyUpAnimationControllerDelegate;

@interface FBFlyUpAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isPresenting;
    BOOL _fadeOnDismissal;
    id <FBFlyUpAnimationControllerDelegate> _delegate;
    unsigned int _dismissalDirection;
    struct CGSize _contentSize;
}

@property(nonatomic) unsigned int dismissalDirection; // @synthesize dismissalDirection=_dismissalDirection;
@property(nonatomic) BOOL fadeOnDismissal; // @synthesize fadeOnDismissal=_fadeOnDismissal;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) BOOL isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) __weak id <FBFlyUpAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animateOverlay:(id)arg1 toDimmingPercent:(float)arg2;
- (void)_animateContentView:(id)arg1 toRotation:(float)arg2;
- (void)_animateContentView:(id)arg1 toPositionY:(float)arg2 springs:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_animateDismissingTransition:(id)arg1;
- (void)_animatePresentingTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

