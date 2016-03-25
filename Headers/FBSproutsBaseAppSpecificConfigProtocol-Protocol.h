//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerAuthor, FBComposerPublishTarget, NSArray, NSString;

@protocol FBSproutsBaseAppSpecificConfigProtocol <NSObject>
@property(readonly, copy, nonatomic) NSString *postContentOrigin;
@property(readonly, copy, nonatomic) NSString *postSourceType;
@property(readonly, copy, nonatomic) NSString *uploadVideoTitle;
@property(readonly, copy, nonatomic) NSString *takeAPhotoSproutTitle;
@property(readonly, copy, nonatomic) NSString *shareLinkSproutTitle;
@property(readonly, copy, nonatomic) NSString *questionAndAnswerTitle;
@property(readonly, copy, nonatomic) NSString *loopsSproutTitle;
@property(readonly, copy, nonatomic) NSString *liveVideoTitle;
@property(readonly, copy, nonatomic) NSString *improvedPhotoString;
@property(readonly, copy, nonatomic) NSString *improvedCheckinString;
@property(readonly, copy, nonatomic) NSString *improvedStatusString;
@property(readonly, copy, nonatomic) NSString *collageSproutTitle;
@property(readonly, copy, nonatomic) NSString *activitySproutTitle;
@property(readonly, nonatomic) BOOL showLayoutSprout;
@property(readonly, nonatomic) BOOL showHyperlapseSprout;
@property(readonly, nonatomic) BOOL showFloatingActionButton;
@property(readonly, nonatomic) BOOL removeFeedPublisherBar;
- (NSArray *)sproutsFromTopToBottom;
- (FBComposerPublishTarget *)postPublishTarget;
- (FBComposerAuthor *)postAuthor;
@end

