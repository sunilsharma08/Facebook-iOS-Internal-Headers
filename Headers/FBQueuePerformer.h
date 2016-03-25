//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPerforming-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBQueuePerformer : NSObject <FBPerforming>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queueIdentifier;
}

+ (id)queuePerformerWithQueue:(id)arg1;
+ (id)globalDefaultPerformer;
+ (id)mainQueuePerformer;
- (void).cxx_destruct;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCurrentPerformer;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

