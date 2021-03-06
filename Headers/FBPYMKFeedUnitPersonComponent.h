//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemPerson, NSString;

@interface FBPYMKFeedUnitPersonComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBMemPerson *_person;
    FBFeedComponentToolbox *_toolbox;
    FBIntentAnalyticsInfo *_analyticsInfo;
    SEL _addFriendAction;
    SEL _tapProfilePictureAction;
    SEL _xoutAction;
    NSString *_unitCacheId;
}

+ (id)newWithPerson:(id)arg1 socialContext:(id)arg2 tracking:(id)arg3 unitCacheId:(id)arg4 addFriendAction:(SEL)arg5 tapProfilePictureAction:(SEL)arg6 xoutAction:(SEL)arg7 toolbox:(id)arg8;
+ (id)initialState;
- (void).cxx_destruct;
- (void)navigateToTimeline;
- (void)didTapBackground;
- (void)cancelFriendRequest;
- (void)didTapAddFriend;
- (void)didTapXout;
- (void)becameFullyVisible;

@end

