//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAccessTokenManaging-Protocol.h"
#import "FBInvalidating-Protocol.h"

@class FBKeychainItemController, NSMutableDictionary, NSString;

@interface FBAccessTokenStore : NSObject <FBAccessTokenManaging, FBInvalidating>
{
    NSMutableDictionary *_cachedAccessTokens;
    FBKeychainItemController *_sessionKeychain;
    BOOL _invalidated;
}

- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)cachedAccessTokens;
- (void)setCachedAccessTokens:(id)arg1;
- (void)_persistAccessTokens;
- (void)addViewerAccessTokens:(id)arg1;
- (BOOL)updateAccessToken:(id)arg1 forFBID:(id)arg2;
- (id)accessTokenForFBID:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *accessTokens;
- (id)initWithSessionKeychain:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

