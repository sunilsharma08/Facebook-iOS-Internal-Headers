//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBEntityPickerProtocol-Protocol.h"

@class NSMutableArray, NSString, UIFont, UILabel;

@interface FBComposerAudienceNonInteractiveTokenView : UIView <FBEntityPickerProtocol>
{
    NSMutableArray *_cellViews;
    UIFont *_font;
    BOOL _needsCellResize;
    unsigned int _tokensTruncated;
    UILabel *_truncationLabel;
}

- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)cellViewsPassingTest:(CDUnknownBlockType)arg1;
- (void)sortTokensWithOptions:(unsigned int)arg1 usingTokenViewComparator:(CDUnknownBlockType)arg2;
- (void)_updateCellSeparatorsTail;
- (void)removeAllCellsAndText;
- (void)removeAllCells;
- (id)cellViewForTokenIdentifier:(id)arg1;
- (id)cellViewForObject:(id)arg1;
- (void)removeCellWithObject:(id)arg1;
- (id)addCellWithObject:(id)arg1;
- (unsigned int)cellCount;
- (BOOL)hasTokensTruncated;
- (void)sizeToFit;
- (void)_layoutCells;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

