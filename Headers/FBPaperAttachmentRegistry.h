//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSMutableArray;

@interface FBPaperAttachmentRegistry : NSObject
{
    FBUserSession *_session;
    NSMutableArray *_attachmentControllers;
}

- (void).cxx_destruct;
- (id)attachmentControllerForAttachment:(id)arg1 attachmentContext:(id)arg2 lowResolutionImageFlag:(unsigned int)arg3 highResolutionImageFlag:(unsigned int)arg4;
- (void)addAttachmentController:(Class)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

