//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBBugReportInitialForkView, FBBugReportInitialForkViewTinesInfo, FBBugReportShakeHandler;

@interface FBBugReportInitialForkViewController : UIViewController
{
    FBBugReportInitialForkView *_initialForkView;
    FBBugReportInitialForkViewTinesInfo *_tinesInfo;
    FBBugReportShakeHandler *_shakeHandler;
}

- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)shakeToReportSwitchValueChanged:(id)arg1;
- (void)personDidChooseCancel;
- (void)personDidChooseReportAbuse;
- (void)personDidChooseSendFeedback;
- (void)personDidChooseReportAProblem;
- (void)loadView;
- (id)initWithShakeHandler:(id)arg1;
- (id)init;

@end

