//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMobileTracePolicy-Protocol.h"

@class NSString;

@interface FBAlwaysTracingPolicy : NSObject <FBMobileTracePolicy>
{
}

- (unsigned int)sampleRateForTraceSite:(int)arg1;
- (unsigned long long)thresholdForTraceSite:(int)arg1;
- (BOOL)shouldSampleForTraceSite:(int)arg1;
- (unsigned long long)defaultThreshold;
- (BOOL)tracingEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

