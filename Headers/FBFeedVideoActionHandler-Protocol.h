//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemFeedStory, FBMemStoryAttachment, NSArray, NSDictionary, NSURL;

@protocol FBFeedVideoActionHandler <NSObject>
- (void)openURL:(NSURL *)arg1 fromStory:(FBMemFeedStory *)arg2 attachment:(FBMemStoryAttachment *)arg3 trackingCodes:(NSArray *)arg4 extras:(NSDictionary *)arg5;
@end

