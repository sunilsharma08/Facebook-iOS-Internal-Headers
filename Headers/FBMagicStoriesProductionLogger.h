//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;

@interface FBMagicStoriesProductionLogger : NSObject
{
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 collection:(id)arg4;
- (void)_logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3;
- (void)logDeletedBurstAssetWithTotalAssetCount:(unsigned int)arg1 remainingAssetCount:(unsigned int)arg2 editMode:(int)arg3;
- (void)logDeletedAssetWithOriginalAssetCount:(unsigned int)arg1 remainingAssetCount:(unsigned int)arg2 editMode:(int)arg3;
- (void)logEditEventWithName:(id)arg1 originalAssetCount:(unsigned int)arg2 updatedAssetCount:(unsigned int)arg3 asset:(id)arg4;
- (void)logEditedTitleWithTitleLength:(unsigned int)arg1;
- (void)logCollectionAttachedToComposer:(id)arg1;
- (void)logSwipeFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)logCollectionSeen:(id)arg1 atIndex:(unsigned int)arg2 isEditingFromComposer:(BOOL)arg3;
- (void)logPreviewSelectedForCollection:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logPreviewSeenForCollection:(id)arg1 atIndex:(unsigned int)arg2;
- (void)logPreviewLoaded;
- (id)initWithSession:(id)arg1;

@end

