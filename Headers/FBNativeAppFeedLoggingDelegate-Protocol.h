//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAppFeedAdInvalidationListener-Protocol.h"
#import "FBAppFeedDataSourceListener-Protocol.h"
#import "FBAppFeedEventListener-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, UIScrollView, UIView;
@protocol FBSponsorable><FBAppFeedAdvertisable;

@protocol FBNativeAppFeedLoggingDelegate <FBAppFeedEventListener, FBAppFeedDataSourceListener, FBAppFeedAdInvalidationListener>
- (void)logUpsellConversion;
- (void)logAppFeedClose;
- (void)logAppFeedOpen;
- (void)beginNewLoggingSession;
- (NSMutableDictionary *)extrasForOpenAppStoreWithSponsorable:(id <FBSponsorable><FBAppFeedAdvertisable>)arg1;
- (void)logNoFallbackInvalidationOfSponsorable:(id <FBSponsorable><FBAppFeedAdvertisable>)arg1;
- (void)logAlreadyPresentInvalidationOfSponsorable:(id <FBSponsorable><FBAppFeedAdvertisable>)arg1;
- (void)logAppFeedResponseWithExtrasDict:(NSDictionary *)arg1;
- (void)logAppFeedRequestWithExtrasDict:(NSDictionary *)arg1;
- (void)logGetAdInfoForSponsorable:(id <FBSponsorable><FBAppFeedAdvertisable>)arg1;
- (void)logAdFeedbackForSponsorable:(id <FBSponsorable><FBAppFeedAdvertisable>)arg1 markedUseful:(BOOL)arg2;
- (void)logHideEvent:(NSString *)arg1 forSponsorable:(id <FBSponsorable><FBAppFeedAdvertisable>)arg2;
- (void)sponsorableWasHscrolledOutOfView:(id <FBSponsorable><FBAppFeedAdvertisable>)arg1;
- (void)sponsorableWasHscrolledIntoView:(id <FBSponsorable><FBAppFeedAdvertisable>)arg1 parentView:(UIView *)arg2;
- (void)didEndDisplayingView:(UIView *)arg1 withSponsorable:(id <FBSponsorable><FBAppFeedAdvertisable>)arg2;
- (void)willDisplayView:(UIView *)arg1 withSponsorable:(id <FBSponsorable><FBAppFeedAdvertisable>)arg2;
- (void)updateVisibleViewsForScrollView:(UIScrollView *)arg1;
- (void)logImpressionForSponsorable:(id <FBSponsorable><FBAppFeedAdvertisable>)arg1 atRowIndex:(NSNumber *)arg2;
@end

