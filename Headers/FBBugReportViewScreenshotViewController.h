//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBBugReportViewScreenshotViewDelegate-Protocol.h"

@class FBBugReportViewScreenshotView, NSString, UIColor, UIImage;
@protocol FBBugReportViewScreenshotAnnotationDelegate;

@interface FBBugReportViewScreenshotViewController : UIViewController <FBBugReportViewScreenshotViewDelegate>
{
    id <FBBugReportViewScreenshotAnnotationDelegate> _delegate;
    FBBugReportViewScreenshotView *_viewScreenshotView;
    NSString *_fname;
    UIImage *_image;
    struct CGPoint _previousPoint;
    BOOL _explicitCancelBarButton;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property BOOL explicitCancelBarButton; // @synthesize explicitCancelBarButton=_explicitCancelBarButton;
- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)fb_showNavigationJewels;
- (struct CGPoint)pointForTouch:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didTapDoneButton;
- (void)didTapCancelButton;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithImage:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

