//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerActivityTagObjectPickerModelControllerDelegate-Protocol.h"

@class FBUserSession, NSArray, NSMutableArray, NSString;
@protocol FBComposerActivityTagObjectPrefetchControllerDelegate;

@interface FBComposerActivityTagObjectPrefetchController : NSObject <FBComposerActivityTagObjectPickerModelControllerDelegate>
{
    FBUserSession *_session;
    NSMutableArray *_modelControllers;
    NSArray *_taggableActivities;
    NSString *_placeID;
    NSString *_typeaheadSessionID;
    unsigned int _prefetchCompleteCount;
    NSString *_analyticsUUID;
    NSString *_surfaceID;
    id <FBComposerActivityTagObjectPrefetchControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerActivityTagObjectPrefetchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)composerActivityTagObjectPickerModelController:(id)arg1 loadingDidFailWithError:(id)arg2;
- (void)composerActivityTagObjectPickerModelControllerLoadingDidComplete:(id)arg1 loadedFromCache:(BOOL)arg2;
- (id)modelControllerForTaggableActivity:(id)arg1;
- (void)_beginPrefetch;
- (id)initWithSession:(id)arg1 taggableActivities:(id)arg2 placeID:(id)arg3 typeaheadSessionID:(id)arg4 analyticsUUID:(id)arg5 surfaceID:(id)arg6;

@end

