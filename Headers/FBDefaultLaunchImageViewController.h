//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBDefaultLaunchImageView, NSString, UIView;

@interface FBDefaultLaunchImageViewController : UIViewController
{
    UIView *_contentView;
    FBDefaultLaunchImageView *_launchImageView;
    NSString *_launchImageBaseName;
    unsigned int _supportedLaunchOrientations;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (id)_launchImageForOrientation:(int)arg1;
- (void)_setImageForOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithContentView:(id)arg1 supportedLaunchOrientations:(unsigned int)arg2;

@end

