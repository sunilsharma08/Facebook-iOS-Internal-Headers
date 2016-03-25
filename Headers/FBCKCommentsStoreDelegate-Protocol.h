//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBCKCommentsStore, FBMemFeedback, NSArray, NSIndexSet;

@protocol FBCKCommentsStoreDelegate <NSObject>
- (void)commentsStoreWillHandleGap:(FBCKCommentsStore *)arg1;
- (void)commentStore:(FBCKCommentsStore *)arg1 didUpdateFeedback:(FBMemFeedback *)arg2;
- (void)commentsStoreDidRestoreState:(FBCKCommentsStore *)arg1;
- (void)commentsStore:(FBCKCommentsStore *)arg1 didRemoveComments:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)commentsStore:(FBCKCommentsStore *)arg1 didUpdateComments:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)commentsStore:(FBCKCommentsStore *)arg1 didInsertTailComments:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)commentsStore:(FBCKCommentsStore *)arg1 didInsertHeadComments:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
@end

