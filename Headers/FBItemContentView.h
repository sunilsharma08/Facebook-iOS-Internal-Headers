//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBFIGConfigurable-Protocol.h"
#import "FBFIGThreadSafeSizable-Protocol.h"

@class FBRichTextView, NSString;

@interface FBItemContentView : UIView <FBFIGConfigurable, FBFIGThreadSafeSizable>
{
    FBRichTextView *_titleTextView;
    FBRichTextView *_subtitleTextView;
    FBRichTextView *_secondarySubtitleTextView;
    FBRichTextView *_tertiarySubtitleTextView;
}

+ (id)newWithConfig:(id)arg1;
+ (id)newWithTitle:(id)arg1 subtitle:(id)arg2 secondarySubtitle:(id)arg3 imageDownloader:(id)arg4;
+ (id)newWithTitle:(id)arg1 subtitle:(id)arg2 secondarySubtitle:(id)arg3;
+ (id)newWithTitle:(id)arg1 subtitle:(id)arg2 imageDownloader:(id)arg3;
+ (id)newWithTitle:(id)arg1 subtitle:(id)arg2;
+ (id)newWithTitle:(id)arg1 imageDownloader:(id)arg2;
+ (id)newWithTitle:(id)arg1;
+ (struct CGSize)threadSafeSizeThatFits:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGRect)_rectForString:(id)arg1 defaultFont:(id)arg2 shadowOffset:(struct CGSize)arg3 truncationToken:(id)arg4 origin:(struct CGPoint *)arg5 verticalSpacing:(float)arg6 maxLines:(unsigned int)arg7 maxWidth:(float)arg8;
+ (struct _FBItemContentViewLayout)_layoutForConfig:(id)arg1 size:(struct CGSize)arg2;
+ (id)defaultFIGConfig;
+ (void)initialize;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (struct CGSize)threadSafeSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)oldConfig:(id)arg1 configDidChange:(id)arg2;
- (id)_init;
- (id)init;
- (void)applyConfig:(id)arg1;
- (id)config;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

