//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol FBEntityCardsExpandingCardViewDelegate;

@interface FBEntityCardsExpandingCardView : UIView
{
    id <FBEntityCardsExpandingCardViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBEntityCardsExpandingCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

