//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet;
@protocol FBComposerCommitedMentionsProvider, FBComposerHashtagDecoratorDelegate;

@interface FBComposerHashtagDecorator : NSObject
{
    NSArray *_hashtags;
    NSMutableSet *_hashtagLayers;
    NSObject<FBComposerCommitedMentionsProvider> *_mentionsProvider;
    id <FBComposerHashtagDecoratorDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerHashtagDecoratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSObject<FBComposerCommitedMentionsProvider> *mentionsProvider; // @synthesize mentionsProvider=_mentionsProvider;
- (void).cxx_destruct;
- (id)_mergeSortedRanges:(id)arg1 and:(id)arg2;
- (id)_filterHashtagRanges:(id)arg1 text:(id)arg2;
- (void)_updateHashtags:(id)arg1 inTextView:(id)arg2 textIncludesLeadingOrTrailingWhitespace:(BOOL)arg3;
- (void)highlightHashtags:(id)arg1;
- (id)_generateHashTagsArrayFromText:(id)arg1;
- (id)_finalizeHashtagsForUseWithTrimmedText:(id)arg1;
- (void)_resetHashtags;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)init;

@end

