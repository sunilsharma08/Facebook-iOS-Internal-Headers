//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary;

@interface FBGuideUnitsView : UIView
{
    NSMutableArray *_adapters;
    NSMutableDictionary *_layoutCache;
    float _layoutCacheWidth;
}

- (void).cxx_destruct;
- (struct CGSize)_cardSizeForAdapter:(id)arg1;
- (id)cardAdapters;
- (BOOL)hasContent;
- (void)adapterHeightDidChange:(id)arg1;
- (void)replaceAdapter:(id)arg1 withAdapter:(id)arg2;
- (void)addAdapter:(id)arg1 toPosition:(unsigned int)arg2;
- (void)moveAdapter:(id)arg1 toPosition:(unsigned int)arg2;
- (void)removeAdapter:(id)arg1;
- (void)_clearOutAdapters;
- (void)appendAdapters:(id)arg1 isInitialLoad:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

