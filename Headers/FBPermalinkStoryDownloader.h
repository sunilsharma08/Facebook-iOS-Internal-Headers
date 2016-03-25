//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFeedPermalinkDownloadRequest, FBUserSession, FBViewerContext, NSString;
@protocol FBPermalinkStoryDownloaderDelegate;

@interface FBPermalinkStoryDownloader : NSObject
{
    NSString *_storyGraphQLID;
    NSString *_storyLegacyAPIPostID;
    unsigned int _layoutIdiom;
    FBUserSession *_session;
    FBViewerContext *_viewer;
    FBFeedPermalinkDownloadRequest *_storyDownloadRequest;
    id <FBPermalinkStoryDownloaderDelegate> _delegate;
}

+ (CDUnknownBlockType)_failureBlockForViewController:(id)arg1;
+ (CDUnknownBlockType)_successBlockForViewController:(id)arg1;
@property(nonatomic) __weak id <FBPermalinkStoryDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_newPermalinkDownloadRequestWithSeenBy:(BOOL)arg1;
- (void)cancelRequest;
- (void)downloadStory;
- (id)initWithStoryGraphQLID:(id)arg1 storyLegacyAPIPostID:(id)arg2 layoutIdiom:(unsigned int)arg3 session:(id)arg4 viewer:(id)arg5;

@end

