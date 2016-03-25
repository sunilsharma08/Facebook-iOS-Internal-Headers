//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class FBMemExternalUrl, NSURL;

@interface FBURLIntentTarget : FBIntentTarget
{
    NSURL *_URL;
}

+ (id)URLTargetForURL:(id)arg1;
+ (id)URLTargetWithExternalURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;
@property(readonly, nonatomic) FBMemExternalUrl *externalURL;

@end

