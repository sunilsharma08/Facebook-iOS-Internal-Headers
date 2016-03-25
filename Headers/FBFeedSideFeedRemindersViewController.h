//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBFlipViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class FBFlipViewController, FBUserSession, NSArray, NSString, UIButton, UIImageView, UILabel, UIScrollView;
@protocol FBQueriedRemindersSideFeedSubUnitFieldsProtocol;

@interface FBFeedSideFeedRemindersViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate, FBFlipViewControllerDelegate>
{
    struct CGRect _transitionRect;
    UIImageView *_blurredBackgroundView;
    UIImageView *_snapshotBackgroundView;
    struct CGSize _lastLayoutSize;
    id <FBQueriedRemindersSideFeedSubUnitFieldsProtocol> _reminders;
    FBUserSession *_session;
    UILabel *_titleLabel;
    UIButton *_doneButton;
    UIScrollView *_scrollView;
    NSArray *_reminderViews;
    FBFlipViewController *_flipViewController;
}

@property(readonly, nonatomic) FBFlipViewController *flipViewController; // @synthesize flipViewController=_flipViewController;
@property(readonly, copy, nonatomic) NSArray *reminderViews; // @synthesize reminderViews=_reminderViews;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) id <FBQueriedRemindersSideFeedSubUnitFieldsProtocol> reminders; // @synthesize reminders=_reminders;
- (void).cxx_destruct;
- (BOOL)_shouldAnimateTransitionForReminderView:(id)arg1;
- (void)_performTransitionAnimation:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performDismissalTransition:(id)arg1;
- (void)_performPresentationTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_horizontallyLayoutViews:(id)arg1 withPadding:(float)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)flipViewControllerDidTapBackground:(id)arg1;
- (void)flipDismissViewControllerCompletion:(CDUnknownBlockType)arg1;
- (void)flipDismissViewController;
- (void)flipPresentViewController:(id)arg1 fromView:(id)arg2 initialPosition:(struct CGPoint)arg3 contentSize:(struct CGSize)arg4 completion:(CDUnknownBlockType)arg5;
- (void)flipPresentViewController:(id)arg1 fromView:(id)arg2 initialPosition:(struct CGPoint)arg3;
- (void)_releaseDoneButton;
- (void)_pressDoneButton;
- (void)_dismiss:(id)arg1;
- (id)viewsForReminders;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)titleText;
- (id)initWithSession:(id)arg1 reminders:(id)arg2 transitionRect:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

