//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMagicStoryEditView;

@protocol FBMagicStoryEditViewDelegate <NSObject>
- (unsigned int)magicStoryEditViewCurrentAssetIndex:(FBMagicStoryEditView *)arg1;
- (void)magicStoryEditView:(FBMagicStoryEditView *)arg1 willSetBurstToIndex:(unsigned int)arg2;
- (void)magicStoryEditViewCollectionUpdated;
- (void)magicStoryEditViewDidCancel;
- (void)magicStoryEditView:(FBMagicStoryEditView *)arg1 didScrollToItemAtIndex:(unsigned int)arg2;
@end

