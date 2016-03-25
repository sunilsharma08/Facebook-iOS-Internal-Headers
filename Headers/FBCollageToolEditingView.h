//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBCollageToolPanelViewDelegate-Protocol.h"
#import "FBCollageToolScrubberViewDelegate-Protocol.h"

@class FBCollageToolAdjustmentView, FBCollageToolPanelView, FBCollageToolScrubberView, NSMutableArray, NSString, NSTimer, UICollectionView, UIProgressView;
@protocol FBCollageToolEditingViewDelegate;

@interface FBCollageToolEditingView : UIView <FBCollageToolPanelViewDelegate, FBCollageToolScrubberViewDelegate>
{
    UIView *_adjustmentViewContainerView;
    NSTimer *_progressBarTimer;
    UIProgressView *_progressView;
    FBCollageToolScrubberView *_scrubberView;
    BOOL _pickerMode;
    FBCollageToolAdjustmentView *_adjustmentView;
    float _borderWidth;
    NSMutableArray *_collageToolPhotoAttachments;
    int _currentLayoutIndex;
    id <FBCollageToolEditingViewDelegate> _delegate;
    FBCollageToolPanelView *_panelView;
    UIView *_pickerView;
    UICollectionView *_selectionView;
}

@property(retain, nonatomic) UICollectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) BOOL pickerMode; // @synthesize pickerMode=_pickerMode;
@property(retain, nonatomic) FBCollageToolPanelView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) __weak id <FBCollageToolEditingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int currentLayoutIndex; // @synthesize currentLayoutIndex=_currentLayoutIndex;
@property(retain, nonatomic) NSMutableArray *collageToolPhotoAttachments; // @synthesize collageToolPhotoAttachments=_collageToolPhotoAttachments;
@property(readonly, nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) FBCollageToolAdjustmentView *adjustmentView; // @synthesize adjustmentView=_adjustmentView;
- (void).cxx_destruct;
- (void)FBCollageToolScrubberView:(id)arg1 didChangeSliderValue:(float)arg2;
- (void)collageToolPanelViewDidHitReplaceButton:(id)arg1;
- (void)collageToolPanelViewDidHitFlipButton:(id)arg1;
- (void)collageToolPanelViewDidHitMirrorButton:(id)arg1;
- (void)_layoutPickerViewWithAnimation:(BOOL)arg1;
- (void)_runProgressBarTo:(float)arg1 withSpeed:(float)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_timerTriggered;
- (void)setBorderWidth:(float)arg1;
- (void)updateShowProgress:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateWithAttachment:(id)arg1 atIndex:(unsigned int)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 collageToolPhotoAttachments:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

