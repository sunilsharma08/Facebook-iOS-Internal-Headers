//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerActivityTagObjectPickerModelControllerDelegate-Protocol.h"
#import "FBPresenceComposerDataSource-Protocol.h"
#import "FBPresenceComposerPlacePickerListener-Protocol.h"

@class FBComposerActivityTagObjectPickerModelController, FBMemTaggableActivity, FBPresenceComposerActivityTypeSelection, FBUserSession, NSArray, NSString;
@protocol FBPresenceComposerDataSourceListener;

@interface FBPresenceComposerSingleActivityTypeDataSource : NSObject <FBComposerActivityTagObjectPickerModelControllerDelegate, FBPresenceComposerDataSource, FBPresenceComposerPlacePickerListener>
{
    NSArray *_objects;
    FBPresenceComposerActivityTypeSelection *_activityTypeSelection;
    FBComposerActivityTagObjectPickerModelController *_objectModelController;
    id <FBPresenceComposerDataSourceListener> _listener;
    FBUserSession *_session;
    FBMemTaggableActivity *_taggableActivity;
    NSString *_typeaheadSessionID;
}

@property(copy, nonatomic) NSString *typeaheadSessionID; // @synthesize typeaheadSessionID=_typeaheadSessionID;
- (void).cxx_destruct;
- (void)clearedPlaceSelection;
- (void)builtInPlaceSelected:(id)arg1;
- (void)nearbyPlaceSelected:(id)arg1;
- (void)composerActivityTagObjectPickerModelController:(id)arg1 loadingDidFailWithError:(id)arg2;
- (void)composerActivityTagObjectPickerModelControllerLoadingDidComplete:(id)arg1 loadedFromCache:(BOOL)arg2;
- (void)failedToLoadObjectsForActivityTypeSelection:(id)arg1 withError:(id)arg2;
- (void)stopUpdating;
- (id)searchResultAtIndex:(unsigned int)arg1;
- (unsigned int)countOfSearchResults;
- (void)setSearchQuery:(id)arg1;
- (id)searchQuery;
- (void)fetchSearchResults;
- (void)dealloc;
- (id)initWithActivityTypeSelection:(id)arg1 session:(id)arg2 listener:(id)arg3 selectedPlaceID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

