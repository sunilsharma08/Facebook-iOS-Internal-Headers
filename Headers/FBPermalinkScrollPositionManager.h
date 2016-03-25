//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UICollectionView;
@protocol FBPermalinkScrollPositionManagerDelegate;

@interface FBPermalinkScrollPositionManager : NSObject
{
    UICollectionView *_collectionView;
    BOOL _shouldScrollToBottom;
    BOOL _shouldScrollToTop;
    BOOL _shouldShowNewCommentsPill;
    unsigned int _numberOfInsertedComments;
    BOOL _shouldScrollToFocusedComment;
    id <FBPermalinkScrollPositionManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPermalinkScrollPositionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_scrollToFocusedCommentAnimated:(BOOL)arg1;
- (void)applyScrollPositionAnimated:(BOOL)arg1;
- (void)determineScrollPositionWithInsertedComments:(id)arg1 atIndexes:(id)arg2 isInitialLoad:(BOOL)arg3 isRanked:(BOOL)arg4 shouldScrollToFocusedComment:(BOOL)arg5;
- (void)determineScrollPositionBeforeChangingContentInsets;
- (id)initWithCollectionView:(id)arg1;

@end

