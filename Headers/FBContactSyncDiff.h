//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBContactSyncRecord;

@interface FBContactSyncDiff : NSObject
{
    FBContactSyncRecord *_insertedRecord;
    FBContactSyncRecord *_removedRecord;
}

@property(readonly, nonatomic) FBContactSyncRecord *removedRecord; // @synthesize removedRecord=_removedRecord;
@property(readonly, nonatomic) FBContactSyncRecord *insertedRecord; // @synthesize insertedRecord=_insertedRecord;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithInsertedRecord:(id)arg1 removedRecord:(id)arg2;

@end

