//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class FBMemFeedback, NSString;

@interface FBLikersListIntentTarget : FBIntentTarget
{
    NSString *_feedbackID;
}

+ (id)likersListTargetWithFeedbackID:(id)arg1;
+ (id)likersListTargetWithFeedback:(id)arg1;
@property(readonly, copy, nonatomic) NSString *feedbackID; // @synthesize feedbackID=_feedbackID;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;
- (BOOL)isLikesIntentTarget;
@property(readonly, nonatomic) FBMemFeedback *feedback;

@end

