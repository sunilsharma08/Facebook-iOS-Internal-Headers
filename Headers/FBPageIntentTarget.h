//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class FBMemPage, NSString;

@interface FBPageIntentTarget : FBIntentTarget
{
    NSString *_FBID;
}

+ (id)pageTargetWithFBID:(id)arg1;
+ (id)pageTargetWithPage:(id)arg1;
@property(readonly, copy, nonatomic) NSString *FBID; // @synthesize FBID=_FBID;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;
@property(readonly, nonatomic) FBMemPage *page;

@end

