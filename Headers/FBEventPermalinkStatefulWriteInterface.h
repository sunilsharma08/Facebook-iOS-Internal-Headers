//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSectionedDataSourceWriting-Protocol.h"

@class CKSectionedArrayController, NSString;
@protocol FBSectionedDataSourceWriting;

@interface FBEventPermalinkStatefulWriteInterface : NSObject <FBSectionedDataSourceWriting>
{
    id <FBSectionedDataSourceWriting> _writeInterface;
    CDUnknownBlockType _postUpdateBlock;
    CKSectionedArrayController *_cachedState;
}

@property(readonly, nonatomic) CKSectionedArrayController *cachedState; // @synthesize cachedState=_cachedState;
- (void).cxx_destruct;
- (void)updateItems;
- (void)enqueueReload;
- (unsigned long long)enqueueChangeset:(const struct Changeset *)arg1;
- (id)initWithWriteInterface:(id)arg1 postUpdateBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

