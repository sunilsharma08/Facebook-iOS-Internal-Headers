//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppSectionStateCachingListener-Protocol.h"
#import "FBBookmarkNavigationViewCoordinatorLifecycleListener-Protocol.h"

@class FBAppSectionManager, FBAppSectionStateCache, FBAppSectionStateUpdateManager, FBBookmarkNavigationViewCoordinatorLifecycleListenerAnnouncer, FBUserSession, NSString;
@protocol FBAppSectionReinitializerDelegate;

@interface FBAppSectionReinitializer : NSObject <FBAppSectionStateCachingListener, FBBookmarkNavigationViewCoordinatorLifecycleListener>
{
    FBUserSession *_session;
    FBAppSectionManager *_appSectionManager;
    FBAppSectionStateCache *_appSectionStateCache;
    FBBookmarkNavigationViewCoordinatorLifecycleListenerAnnouncer *_bookmarkNavigationViewCoordinatorLifecycleListenerAnnouncer;
    FBAppSectionStateUpdateManager *_appSectionStateUpdateManager;
    id <FBAppSectionReinitializerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAppSectionReinitializerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)successfullyLoadedAppSectionState:(id)arg1;
- (void)successfullyStoredAppSectionState:(id)arg1;
- (void)failedToWriteAppSectionState:(id)arg1;
- (void)failedToLoadStoredAppSectionState;
- (void)attemptedToLoadNonExistentAppSectionState;
- (void)bookmarkNavigationViewCoordinatorSelectedNewAppSectionWithAppSectionState:(id)arg1;
- (void)bookmarkNavigationViewCoordinatorDidStartSettingUpViewControllersWithAppSectionState:(id)arg1;
- (void)dealloc;
- (id)initWithPreferences:(id)arg1 session:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

