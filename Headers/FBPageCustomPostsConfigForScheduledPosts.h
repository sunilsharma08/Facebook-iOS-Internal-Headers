//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPageCustomPostsConfig-Protocol.h"

@class NSString;

@interface FBPageCustomPostsConfigForScheduledPosts : NSObject <FBPageCustomPostsConfig>
{
}

+ (id)imageForEmptyView;
+ (id)titleForEmptyView;
+ (void)logCustomPostActionWithPageFBID:(id)arg1 userFBID:(id)arg2 storyID:(id)arg3 actionType:(int)arg4 statusType:(int)arg5;
+ (id)bootstrapContentForEditingWithStory:(id)arg1 customPostsContext:(id)arg2 composerTraits:(id)arg3 composerDestination:(id)arg4 mentions:(id)arg5;
+ (id)actionSheetActionsWithEditHistory:(BOOL)arg1;
+ (id)subtitleStringWithStory:(id)arg1;
+ (id)dateFromStory:(id)arg1;
+ (id)extractFeedStoryNodesFromConnection:(id)arg1;
+ (id)graphQLPagedRequestWithTargetID:(id)arg1 callbackPerformer:(id)arg2;
+ (id)customPostsConnectionWithMemPage:(id)arg1;
+ (id)navigationItemTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

