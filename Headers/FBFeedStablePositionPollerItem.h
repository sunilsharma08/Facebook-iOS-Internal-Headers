//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol FBFeedStablePositionRequestor;

@interface FBFeedStablePositionPollerItem : NSObject
{
    id <FBFeedStablePositionRequestor> _requestor;
}

@property(readonly, nonatomic) __weak id <FBFeedStablePositionRequestor> requestor; // @synthesize requestor=_requestor;
- (void).cxx_destruct;
- (id)initWithRequestor:(id)arg1;

@end

