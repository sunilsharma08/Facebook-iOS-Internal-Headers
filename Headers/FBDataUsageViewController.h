//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBUserSession, UILabel;

@interface FBDataUsageViewController : UIViewController
{
    UILabel *_alltimeDataUsageLabel;
    UILabel *_alltimeDataWatchedLabel;
    UILabel *_alltimeVideoWatchLabel;
    UILabel *_alltimeVideoBitrateLabel;
    UILabel *_lastMonthDataUsageLabel;
    UILabel *_lastMonthDataWatchedLabel;
    UILabel *_lastMonthVideoWatchLabel;
    UILabel *_lastMonthVideoBitrateLabel;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (BOOL)fb_showAuxiliaryViewController;
- (void)viewDidLoad;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithSession:(id)arg1;

@end

