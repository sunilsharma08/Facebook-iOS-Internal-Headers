//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAppDetailComponentCell.h"

#import "FBAppDetailTOSViewDelegate-Protocol.h"

@class FBAppDetailTOSView, NSString;
@protocol FBAppDetailTOSCellDelegate;

@interface FBAppDetailTOSCell : FBAppDetailComponentCell <FBAppDetailTOSViewDelegate>
{
    FBAppDetailTOSView *_tosView;
    id <FBAppDetailTOSCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAppDetailTOSCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setupAppDetails;
- (void)reload;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)openPrivacyURL:(id)arg1;
- (void)openTOSURL:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

