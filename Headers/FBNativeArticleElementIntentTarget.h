//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBStoryIntentTarget.h"

@class NSString;

@interface FBNativeArticleElementIntentTarget : FBStoryIntentTarget
{
    NSString *_elementID;
}

+ (id)elementTargetWithID:(id)arg1;
+ (id)storyTargetWithGraphQLID:(id)arg1 elementID:(id)arg2;
@property(readonly, copy, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;
- (void).cxx_destruct;
- (id)initWithGraphQLID:(id)arg1;

@end

