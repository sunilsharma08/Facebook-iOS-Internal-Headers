//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASTextNodeWordKerner, NSAttributedString, NSLayoutManager, NSTextContainer, NSTextStorage;

@interface ASTextNodeRenderer : NSObject
{
    struct CGSize _constrainedSize;
    struct CGSize _calculatedSize;
    NSAttributedString *_attributedString;
    NSAttributedString *_truncationString;
    int _truncationMode;
    unsigned int _maximumLineCount;
    struct _NSRange _truncationCharacterRange;
    struct _NSRange _visibleRange;
    ASTextNodeWordKerner *_wordKerner;
    struct RecursiveMutex _textKitLock;
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
}

+ (id)_truncationCharacterSet;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct _NSRange)truncationStringCharacterRange;
- (struct _NSRange)visibleRange;
- (unsigned int)lineCount;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (unsigned int)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned int)arg1;
- (unsigned int)_calculateCharacterIndexBeforeTruncationMessage;
- (void)enumerateTextIndexesAtPosition:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)_rectForGlyphAtIndex:(unsigned int)arg1 measureOption:(unsigned int)arg2;
- (id)rectsForTextRange:(struct _NSRange)arg1 measureOption:(unsigned int)arg2;
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (struct CGRect)trailingRect;
- (struct CGSize)size;
- (void)_calculateSize;
- (void)_invalidateLayout;
- (void)_initializeTextKitComponentsWithAttributedString:(id)arg1;
- (void)_initializeTextKitComponentsIfNeeded;
- (id)initWithAttributedString:(id)arg1 truncationString:(id)arg2 truncationMode:(int)arg3 maximumLineCount:(unsigned int)arg4 constrainedSize:(struct CGSize)arg5;

@end

