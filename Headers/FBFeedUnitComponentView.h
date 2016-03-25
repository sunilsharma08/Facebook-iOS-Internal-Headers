//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CKComponentHostingViewDelegate-Protocol.h"
#import "CKComponentProvider-Protocol.h"

@class CKComponentHostingView, NSString;
@protocol FBFeedUnitComponentViewDelegate, FBQueriedFeedUnitFieldsProtocol;

@interface FBFeedUnitComponentView : UIView <CKComponentProvider, CKComponentHostingViewDelegate>
{
    CKComponentHostingView *_unitHostingView;
    id <FBQueriedFeedUnitFieldsProtocol> _unit;
    id <FBFeedUnitComponentViewDelegate> _delegate;
}

+ (struct UIEdgeInsets)contentsEdgeInsets;
+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(nonatomic) __weak id <FBFeedUnitComponentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
@property(retain, nonatomic) id <FBQueriedFeedUnitFieldsProtocol> unit;
- (id)initWithToolbox:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

