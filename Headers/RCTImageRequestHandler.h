//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTURLRequestHandler-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTImageRequestHandler : NSObject <RCTURLRequestHandler>
{
    int _currentToken;
}

+ (void)load;
+ (id)moduleName;
- (id)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (BOOL)canHandleRequest:(id)arg1;

// Remaining properties
@property(nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

