//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface FBFeedbackOptimisticCommentStore : NSObject
{
    NSMutableArray *_optimisticComments;
}

- (void).cxx_destruct;
- (BOOL)_replaceCommentAtIndex:(int)arg1 withComment:(id)arg2;
- (BOOL)_removeCommentAtIndex:(int)arg1;
- (int)_indexOfCommentPassingCondition:(CDUnknownBlockType)arg1;
- (int)indexOfCommentWithOptimisticID:(id)arg1;
- (int)indexOfCommentWithPermanentID:(id)arg1;
- (id)allComments;
- (id)commentAtIndex:(unsigned int)arg1;
- (unsigned int)commentsCount;
- (BOOL)containsCommentWithPermanentID:(id)arg1;
- (BOOL)containsCommentWithOptimisticID:(id)arg1;
- (BOOL)removeCommentWithPermanentID:(id)arg1;
- (BOOL)removeCommentWithOptimisticID:(id)arg1;
- (BOOL)replaceCommentByPermanentIDWithComment:(id)arg1;
- (BOOL)replaceCommentByOptimisticIDWithComment:(id)arg1;
- (BOOL)addComment:(id)arg1;
- (id)init;

@end

