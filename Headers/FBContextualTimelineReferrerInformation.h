//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBContextualTimelineReferrerInformation : FBValueObject <NSCopying>
{
    NSString *_referrerType;
    NSString *_referrerTargetID;
}

@property(readonly, copy, nonatomic) NSString *referrerTargetID; // @synthesize referrerTargetID=_referrerTargetID;
@property(readonly, copy, nonatomic) NSString *referrerType; // @synthesize referrerType=_referrerType;
- (void).cxx_destruct;
- (id)initWithReferrerType:(id)arg1 referrerTargetID:(id)arg2;

@end

