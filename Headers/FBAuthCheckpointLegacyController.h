//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAuthCheckpointControlling-Protocol.h"

@class FBRequesterConfiguration;
@protocol FBAuthCheckpointControllingDelegate;

@interface FBAuthCheckpointLegacyController : NSObject <FBAuthCheckpointControlling>
{
    FBRequesterConfiguration *_requesterConfiguration;
    Class _navigationBarClass;
    id <FBAuthCheckpointControllingDelegate> _authDelegate;
}

@property(nonatomic) __weak id <FBAuthCheckpointControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (void)presentCheckpointPresenter:(id)arg1 withCheckpointError:(id)arg2;
- (id)initWithRequesterConfiguration:(id)arg1 navigationBarClass:(Class)arg2;

@end

