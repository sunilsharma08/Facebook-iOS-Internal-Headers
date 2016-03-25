//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBOutgoingAttachment-Protocol.h"

@class NSData, NSString;

@interface FBMP4VideoAttachment : NSObject <FBOutgoingAttachment>
{
    NSData *_attachmentData;
}

@property(retain, nonatomic) NSData *attachmentData; // @synthesize attachmentData=_attachmentData;
- (void).cxx_destruct;
- (id)mimeType;
- (id)attachmentFilename;
- (id)initWithVideoData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

