//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerLogger, FBComposerPublisherData, FBMediaUploadItemManager, FBPublisherManager, FBUserSession, NSString;
@protocol FBComposerPublisher, FBComposerPublisherStatusListener;

@protocol FBPublisherProvider <NSObject>
- (id <FBComposerPublisher>)publisherForIdentifier:(NSString *)arg1 publication:(FBComposerPublisherData *)arg2 publisherManager:(FBPublisherManager *)arg3 mediaUploadItemManager:(FBMediaUploadItemManager *)arg4 logger:(FBComposerLogger *)arg5 session:(FBUserSession *)arg6 listener:(id <FBComposerPublisherStatusListener>)arg7;
@end

