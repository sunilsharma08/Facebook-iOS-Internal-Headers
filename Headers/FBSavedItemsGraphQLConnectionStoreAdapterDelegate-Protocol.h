//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemTimelineAppCollectionItem, FBSavedItemsGraphQLConnectionStoreAdapter, NSString, UIView;

@protocol FBSavedItemsGraphQLConnectionStoreAdapterDelegate <NSObject>
- (void)adapter:(FBSavedItemsGraphQLConnectionStoreAdapter *)arg1 willStoreLoad:(unsigned int)arg2 numberOfEdges:(int)arg3 wasLoadedFromCache:(BOOL)arg4;
- (void)adapter:(FBSavedItemsGraphQLConnectionStoreAdapter *)arg1 didDownloadLoad:(unsigned int)arg2 numberOfEdges:(int)arg3;
- (void)adapter:(FBSavedItemsGraphQLConnectionStoreAdapter *)arg1 didSelectItem:(FBMemTimelineAppCollectionItem *)arg2;
- (float)adapter:(FBSavedItemsGraphQLConnectionStoreAdapter *)arg1 heightForHeaderInSectionWithTitle:(NSString *)arg2;
- (UIView *)adapter:(FBSavedItemsGraphQLConnectionStoreAdapter *)arg1 viewForHeaderInSectionWithTitle:(NSString *)arg2;
@end

