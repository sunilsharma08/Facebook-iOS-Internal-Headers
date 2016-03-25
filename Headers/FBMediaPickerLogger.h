//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMediaLoggerProtocol-Protocol.h"

@class FBMediaPickerBaseTraits, NSString;

@interface FBMediaPickerLogger : NSObject <FBMediaLoggerProtocol>
{
    FBMediaPickerBaseTraits *_traits;
    long long _initialMemoryUsage;
    NSString *_sessionID;
}

@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)logMemoryUsage:(id)arg1;
- (void)markInitialMemoryUsage;
- (void)logEvent:(id)arg1 extra:(id)arg2;
- (void)logEvent:(id)arg1;
- (id)initWithTraits:(id)arg1 sessionID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

