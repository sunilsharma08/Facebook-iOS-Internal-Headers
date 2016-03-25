//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBEventContextRowsView, FBEventGuestlistView, FBEventPermalinkToolbox, UIImageView;

@interface FBEventContextRowGuestlistHybridView : UIView
{
    BOOL _showGuestlist;
    UIImageView *_firstStackMask;
    UIImageView *_secondStackMask;
    struct UIEdgeInsets _contentEdgeInset;
    UIView *_separatorView;
    FBEventPermalinkToolbox *_toolbox;
    FBEventContextRowsView *_contextRowsView;
    FBEventGuestlistView *_guestlistView;
}

@property(readonly, nonatomic) FBEventGuestlistView *guestlistView; // @synthesize guestlistView=_guestlistView;
@property(readonly, nonatomic) FBEventContextRowsView *contextRowsView; // @synthesize contextRowsView=_contextRowsView;
- (void).cxx_destruct;
- (void)layoutStackedSubviews;
- (void)layoutSideBySideSubviews;
- (struct CGSize)sizeWithMarginAndCardInsets:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)stackedSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sideBySideSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_constrainedSideBySideSize:(struct CGSize)arg1;
- (struct CGSize)_constrainedStackSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithContextRowModel:(id)arg1 guestlistModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 toolbox:(id)arg2;

@end

