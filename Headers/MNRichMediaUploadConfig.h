//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface MNRichMediaUploadConfig : FBValueObject <NSCopying>
{
    BOOL _chunkedUploadEnabled;
    unsigned int _sizeInBytes;
    NSString *_mediaCreationRequestPath;
    NSString *_mimeType;
    NSString *_fileName;
    NSString *_sha256;
    NSDictionary *_extraLoggingData;
}

@property(readonly, nonatomic) BOOL chunkedUploadEnabled; // @synthesize chunkedUploadEnabled=_chunkedUploadEnabled;
@property(readonly, copy, nonatomic) NSDictionary *extraLoggingData; // @synthesize extraLoggingData=_extraLoggingData;
@property(readonly, copy, nonatomic) NSString *sha256; // @synthesize sha256=_sha256;
@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSString *mediaCreationRequestPath; // @synthesize mediaCreationRequestPath=_mediaCreationRequestPath;
@property(readonly, nonatomic) unsigned int sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
- (void).cxx_destruct;
- (id)initWithSizeInBytes:(unsigned int)arg1 mediaCreationRequestPath:(id)arg2 mimeType:(id)arg3 fileName:(id)arg4 sha256:(id)arg5 extraLoggingData:(id)arg6 chunkedUploadEnabled:(BOOL)arg7;

@end

