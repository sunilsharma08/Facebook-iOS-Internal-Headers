//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBOutgoingAttachment-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface MNRichMediaAttachment : FBValueObject <FBOutgoingAttachment, NSCopying>
{
    NSString *_mimeType;
    NSData *_attachmentData;
    NSString *_attachmentFilename;
    NSString *_preTranscodeDataSHA256Hash;
}

@property(readonly, copy, nonatomic) NSString *preTranscodeDataSHA256Hash; // @synthesize preTranscodeDataSHA256Hash=_preTranscodeDataSHA256Hash;
@property(readonly, copy, nonatomic) NSString *attachmentFilename; // @synthesize attachmentFilename=_attachmentFilename;
@property(readonly, copy, nonatomic) NSData *attachmentData; // @synthesize attachmentData=_attachmentData;
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
- (void).cxx_destruct;
- (id)initWithMimeType:(id)arg1 attachmentData:(id)arg2 attachmentFilename:(id)arg3 preTranscodeDataSHA256Hash:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

