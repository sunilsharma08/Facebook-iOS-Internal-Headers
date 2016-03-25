//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedGraphQLConnectionManagerListener-Protocol.h"
#import "FBGraphQLConnectionStoreEdgeFiltering-Protocol.h"

@class NSString;

@interface FBInstagramPhotosFromFriendsFeedUnitInvalidationController : NSObject <FBGraphQLConnectionStoreEdgeFiltering, FBFeedGraphQLConnectionManagerListener>
{
    BOOL _componentsEnabled;
    CDUnknownFunctionPointerType _instagramAppInstalledChecker;
    BOOL _deviceIsPad;
}

- (id)filteredEdgesFromEdgesToBeAdded:(id)arg1 atChunkIndex:(unsigned int)arg2 state:(id)arg3 locationType:(unsigned int)arg4;
- (void)feedGraphQLConnectionManager:(id)arg1 didCreateConnection:(id)arg2 forConnectionInfo:(id)arg3;
- (id)initWithInstagramAppInstalledChecker:(CDUnknownFunctionPointerType)arg1 deviceIsPad:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

