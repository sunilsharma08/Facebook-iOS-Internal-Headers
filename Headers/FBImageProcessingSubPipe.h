//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol FBImageProcessingSubPipeDelegate;

@interface FBImageProcessingSubPipe : NSObject
{
    struct RecursiveMutex _lock;
    BOOL _needsRequestSort;
    BOOL _suspended;
    NSMutableArray *_requestQueue;
    NSMutableSet *_requestSet;
    NSMutableSet *_processingSet;
    id <FBImageProcessingSubPipeDelegate> _delegate;
    unsigned int _flexibleRequestsLimit;
}

@property(nonatomic) unsigned int flexibleRequestsLimit; // @synthesize flexibleRequestsLimit=_flexibleRequestsLimit;
@property(nonatomic) __weak id <FBImageProcessingSubPipeDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (id)requestForProcessing:(id)arg1;
- (void)scheduleRequestQueue;
@property(nonatomic, getter=isSuspended) BOOL suspended;
- (void)setNeedsRequestSort;
- (void)_pruneRequestQueueIfNeeded;
- (void)_sortRequestQueue;
- (id)init;

@end

