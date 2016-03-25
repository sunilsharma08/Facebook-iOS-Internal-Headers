//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMemPageCardController.h"

#import "FBCardViewProvider-Protocol.h"
#import "FBMemPageUpcomingEventsCardCellDelegate-Protocol.h"

@class FBConsistentLookasideCacheObservationHandle, FBMemPage, FBMemPageUpcomingEventsCardCell, FBPageUpcomingEventsViewModel, NSString, UIView;
@protocol FBPageCardProtocol;

@interface FBMemPageUpcomingEventsCardController : FBMemPageCardController <FBMemPageUpcomingEventsCardCellDelegate, FBCardViewProvider>
{
    FBMemPageUpcomingEventsCardCell *_cardCell;
    FBPageUpcomingEventsViewModel *_viewModel;
    FBMemPage *_page;
    BOOL _canShowEmptyCard;
    FBConsistentLookasideCacheObservationHandle *_upcomingEventsCLCHandle;
}

- (void).cxx_destruct;
- (void)didUpdateUpcomingEventsFields:(id)arg1;
- (void)_setupCLCObserverWithPage:(id)arg1;
- (void)upcomingEventsCardCellHeightUpdated;
- (void)upcomingEventsSendRSVPToEventWithFBID:(id)arg1 rsvpStatus:(id)arg2;
- (void)upcomingEventsOpenEventWithFBID:(id)arg1;
- (void)upcomingEventsViewAllEventsForPageFBID:(id)arg1;
- (void)upcomingEventsViewDidUpdateSubscribedStatus:(BOOL)arg1;
- (void)dealloc;
- (void)configureWithPage:(id)arg1;
@property(readonly, nonatomic) UIView<FBPageCardProtocol> *cardView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

