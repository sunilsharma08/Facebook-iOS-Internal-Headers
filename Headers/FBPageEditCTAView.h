//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMemPageCreateCTAItem, FBPageActionableLinkView, FBPageCreateCTASecondaryView, FBPageStackingView, NSString;
@protocol FBPageEditCTAViewDelegate;

@interface FBPageEditCTAView : UIView
{
    FBMemPageCreateCTAItem *_ctaItem;
    NSString *_pagePhoneNumber;
    id <FBPageEditCTAViewDelegate> _delegate;
    FBPageStackingView *_stackingView;
    FBPageCreateCTASecondaryView *_secondaryView;
    FBPageActionableLinkView *_changeCTALink;
    FBPageActionableLinkView *_deleteCTALink;
}

@property(retain, nonatomic) FBPageActionableLinkView *deleteCTALink; // @synthesize deleteCTALink=_deleteCTALink;
@property(retain, nonatomic) FBPageActionableLinkView *changeCTALink; // @synthesize changeCTALink=_changeCTALink;
@property(retain, nonatomic) FBPageCreateCTASecondaryView *secondaryView; // @synthesize secondaryView=_secondaryView;
- (void).cxx_destruct;
- (void)_deleteTapped;
- (void)_editTapped;
- (void)setKeyboardHeight:(float)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 ctaItem:(id)arg2 pagePhoneNumber:(id)arg3 delegate:(id)arg4;

@end

