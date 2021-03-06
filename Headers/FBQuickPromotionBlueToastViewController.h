//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBNuxBannerViewController-Protocol.h"

@class FBQPPromotion, FBQuickPromotionBlueToastView, FBUserSession, NSString;
@protocol FBNuxBannerControllerDelegate;

@interface FBQuickPromotionBlueToastViewController : UIViewController <FBNuxBannerViewController>
{
    FBQuickPromotionBlueToastView *_blueToastView;
    FBUserSession *_session;
    id <FBNuxBannerControllerDelegate> _delegate;
    FBQPPromotion *_promotion;
}

@property(retain, nonatomic) FBQPPromotion *promotion; // @synthesize promotion=_promotion;
@property(nonatomic) __weak id <FBNuxBannerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleButtonTapEvent:(id)arg1;
- (void)_handleDismissButtonClick:(id)arg1;
- (void)_handlePrimaryAction:(id)arg1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1 promotion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

