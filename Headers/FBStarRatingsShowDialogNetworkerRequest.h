//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class FBStarRatingsUserData;

@interface FBStarRatingsShowDialogNetworkerRequest : FBNetworkerRequest
{
    FBStarRatingsUserData *_userData;
}

@property(readonly, nonatomic) FBStarRatingsUserData *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (id)networkRequest;
- (id)initWithCallbackPerformer:(id)arg1 userData:(id)arg2;

@end

