//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class FBLeadGenModalDialogViewController;

@interface FBLeadGenSwipeDownInteractiveTransition : UIPercentDrivenInteractiveTransition
{
    FBLeadGenModalDialogViewController *_presentingViewController;
    BOOL _isMissPan;
    BOOL _interacting;
}

@property(nonatomic) BOOL interacting; // @synthesize interacting=_interacting;
- (void).cxx_destruct;
- (void)userDidPan:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 targetView:(id)arg2;

@end

