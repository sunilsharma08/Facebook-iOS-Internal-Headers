//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMemPageCardCell.h"

#import "FBPageCardProtocol-Protocol.h"

@class FBPageAdminServiceNuxCardCellCrossOutView, FBPageAdminServiceNuxCardCellNuxView, NSString;
@protocol FBPageAdminServiceNuxCardCellDelegate;

@interface FBPageAdminServiceNuxCardCell : FBMemPageCardCell <FBPageCardProtocol>
{
    FBPageAdminServiceNuxCardCellCrossOutView *_editPageButton;
    FBPageAdminServiceNuxCardCellNuxView *_nuxView;
    id <FBPageAdminServiceNuxCardCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPageAdminServiceNuxCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_enterAddServicesFlow;
- (void)_openEditPage;
- (void)_serviceNuxCrossedOut;
- (void)displayAdminNuxCrossOut;
- (void)displayAdminNuxWithPageName:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

