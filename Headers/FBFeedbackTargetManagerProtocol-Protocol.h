//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCommentStreamDisabledWhileEditingProtocol-Protocol.h"
#import "FBCommentStreamViewControllerActionsProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class FBAnalyticsReferrerPerformanceLogger, FBUFICommentToolbox, NSDictionary;
@protocol CKComponentSizeRangeProviding, FBFeedbackTargetManagerDelegate, FBFeedbackTargetProtocol, FBPermalinkChildSource, NSObject;

@protocol FBFeedbackTargetManagerProtocol <NSObject, FBCommentStreamViewControllerActionsProtocol, FBCommentStreamDisabledWhileEditingProtocol>
@property(nonatomic) __weak id <FBFeedbackTargetManagerDelegate> delegate;
@property(readonly, nonatomic) id <FBPermalinkChildSource> footerSource;
@property(readonly, nonatomic) id <FBPermalinkChildSource> source;
@property(readonly, nonatomic) id <FBFeedbackTargetProtocol> feedbackTarget;
- (void)loadFeedbackTargetIfNeeded;

@optional
@property(retain, nonatomic) FBAnalyticsReferrerPerformanceLogger *referrerPerformanceLogger;
@property(readonly, nonatomic) Class componentProvider;
@property(readonly, nonatomic) id <CKComponentSizeRangeProviding> componentConstraintProvider;
- (NSDictionary *)analyticsExtras;
- (id <NSObject>)componentContextWithUFIToolbox:(FBUFICommentToolbox *)arg1 activateCommentComposerAction:(SEL)arg2;
@end

