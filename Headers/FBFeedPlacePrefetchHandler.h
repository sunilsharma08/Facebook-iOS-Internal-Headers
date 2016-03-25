//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPlacePickerPrefetchControllerDelegate-Protocol.h"

@class FBPlacePickerPrefetchController, FBUserSession;
@protocol FBFeedPlacePrefetchHandlingDelegate;

@interface FBFeedPlacePrefetchHandler : NSObject <FBPlacePickerPrefetchControllerDelegate>
{
    FBPlacePickerPrefetchController *_checkinPrefetchController;
    FBUserSession *_userSession;
    id <FBFeedPlacePrefetchHandlingDelegate> _delegate;
}

@property(nonatomic) __weak id <FBFeedPlacePrefetchHandlingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prefetchController:(id)arg1 didFinishWithError:(id)arg2;
- (void)prefetchController:(id)arg1 didFinishWithNearbyDataSet:(id)arg2;
- (id)initWithUserSession:(id)arg1;

@end

