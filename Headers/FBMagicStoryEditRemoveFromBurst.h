//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMagicStoryEditProtocol-Protocol.h"

@class NSString;
@protocol FBAssetProtocol;

@interface FBMagicStoryEditRemoveFromBurst : NSObject <FBMagicStoryEditProtocol>
{
    id <FBAssetProtocol> _asset;
    unsigned int _index;
}

- (void).cxx_destruct;
- (id)applyToLayout:(id)arg1 collectionBeforeEdit:(id)arg2 editedCollection:(id)arg3;
- (id)applyToCollection:(id)arg1;
- (id)initWithAsset:(id)arg1 index:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

