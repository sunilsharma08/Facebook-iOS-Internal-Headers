//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMemPageCardController.h"

#import "FBCardViewProvider-Protocol.h"

@class FBActionBar, FBConsistentLookasideCacheObservationHandle, FBMemPageActionBarTapHandler, FBPageActionBarComponentCell, FBTimelineSeeFirstNuxPresenter, NSString, UIView;
@protocol FBPageCardProtocol;

@interface FBMemPageActionBarCardController : FBMemPageCardController <FBCardViewProvider>
{
    FBPageActionBarComponentCell *_cardCell;
    FBActionBar *_actionBar;
    FBMemPageActionBarTapHandler *_pageActionBarTapHandler;
    FBTimelineSeeFirstNuxPresenter *_seeFirstNuxPresenter;
    FBConsistentLookasideCacheObservationHandle *_observationHandle;
}

- (void).cxx_destruct;
- (void)_consistentFieldDidChange:(id)arg1;
- (void)_setupCLCObserver;
- (BOOL)_isChanged:(id)arg1 newPage:(id)arg2;
- (void)_registerMessageNux;
- (void)_registerSaveNux;
- (id)_getActionBarButtonOfType:(unsigned int)arg1;
- (void)_setupActionBar;
- (void)configureWithPage:(id)arg1;
@property(readonly, nonatomic) UIView<FBPageCardProtocol> *cardView;
- (void)dealloc;
- (id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 actionSource:(int)arg5 sourceID:(id)arg6 toolbox:(id)arg7 scenePath:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

