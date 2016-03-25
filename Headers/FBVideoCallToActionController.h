//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemFeedStory, FBMemSponsorshipData, FBUserSession, NSArray, NSDictionary, UIView;
@protocol FBCallToActionControllerDelegate;

@interface FBVideoCallToActionController : NSObject
{
    FBMemSponsorshipData *_sponsorship;
    BOOL _hasLoggedCTAButtonExposure;
    id <FBCallToActionControllerDelegate> _delegate;
    UIView *_view;
    NSDictionary *_linkOpenExtra;
    FBUserSession *_session;
    FBMemFeedStory *_story;
    NSArray *_trackingCodes;
}

@property(copy, nonatomic) NSArray *trackingCodes; // @synthesize trackingCodes=_trackingCodes;
@property(retain, nonatomic) FBMemFeedStory *story; // @synthesize story=_story;
@property(readonly, nonatomic) FBMemSponsorshipData *sponsorship; // @synthesize sponsorship=_sponsorship;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSDictionary *linkOpenExtra; // @synthesize linkOpenExtra=_linkOpenExtra;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <FBCallToActionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (struct FBCTAButtonConfig)CTAButtonConfig;
- (void)removeTargets;
- (void)_handleCallToActionTapped:(id)arg1;
@property(readonly, nonatomic) BOOL shouldShowEndScreen;
- (id)callToActionVideoEndScreenIcon;
- (id)callToActionLinkType;
- (id)callToActionSource;
- (id)callToActionTitle;
- (id)_actionLink;
- (void)loadView;
- (id)initWithStory:(id)arg1 trackingCodes:(id)arg2 session:(id)arg3;
- (id)_initWithStory:(id)arg1 trackingCodes:(id)arg2 session:(id)arg3;
- (id)initWithVideoCallToActionController:(id)arg1 trackingCodes:(id)arg2 session:(id)arg3;
- (id)init;

@end

