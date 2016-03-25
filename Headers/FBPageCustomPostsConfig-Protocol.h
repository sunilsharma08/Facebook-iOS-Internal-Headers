//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerBootstrapContent, FBComposerDestination, FBComposerTraits, FBGraphQLPagedDownloadRequest, FBMemFeedStory, FBMemPage, FBPageCustomPostsContext, NSArray, NSAttributedString, NSDate, NSMutableArray, NSString, UIImage;
@protocol FBPageCustomPostsConnectionProtocolHuman, FBPerforming;

@protocol FBPageCustomPostsConfig <NSObject>
+ (UIImage *)imageForEmptyView;
+ (NSString *)titleForEmptyView;
+ (void)logCustomPostActionWithPageFBID:(NSString *)arg1 userFBID:(NSString *)arg2 storyID:(NSString *)arg3 actionType:(int)arg4 statusType:(int)arg5;
+ (FBComposerBootstrapContent *)bootstrapContentForEditingWithStory:(FBMemFeedStory *)arg1 customPostsContext:(FBPageCustomPostsContext *)arg2 composerTraits:(FBComposerTraits *)arg3 composerDestination:(FBComposerDestination *)arg4 mentions:(NSArray *)arg5;
+ (NSArray *)actionSheetActionsWithEditHistory:(BOOL)arg1;
+ (NSAttributedString *)subtitleStringWithStory:(FBMemFeedStory *)arg1;
+ (NSDate *)dateFromStory:(FBMemFeedStory *)arg1;
+ (NSMutableArray *)extractFeedStoryNodesFromConnection:(id <FBPageCustomPostsConnectionProtocolHuman>)arg1;
+ (FBGraphQLPagedDownloadRequest *)graphQLPagedRequestWithTargetID:(NSString *)arg1 callbackPerformer:(id <FBPerforming>)arg2;
+ (id <FBPageCustomPostsConnectionProtocolHuman>)customPostsConnectionWithMemPage:(FBMemPage *)arg1;
+ (NSString *)navigationItemTitle;
@end

