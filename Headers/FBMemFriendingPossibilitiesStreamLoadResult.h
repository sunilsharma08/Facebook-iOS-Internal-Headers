//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBStreamLoadResult.h"

@class FBMemFriendingPossibilitiesConnection;

@interface FBMemFriendingPossibilitiesStreamLoadResult : FBStreamLoadResult
{
    FBMemFriendingPossibilitiesConnection *_connectionPage;
}

@property(readonly, nonatomic) FBMemFriendingPossibilitiesConnection *connectionPage; // @synthesize connectionPage=_connectionPage;
- (void).cxx_destruct;
- (id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 connectionPage:(id)arg4;

@end

