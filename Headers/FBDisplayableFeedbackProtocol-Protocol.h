//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol FBDisplayableFeedbackProtocol <NSObject>
- (BOOL)seenByEveryone;
- (int)seenByCount;
- (NSString *)feedbackID;
- (NSString *)legacyApiPostId;
- (BOOL)viewerLikesValue;
- (NSNumber *)likeCount;
- (NSNumber *)shareCount;
- (int)shareCountValue;
- (int)likeCountValue;
- (NSNumber *)commentCount;
- (int)commentCountValue;
- (BOOL)canViewerLikeValue;
- (BOOL)canViewerCommentValue;
@end

