//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface FBAdInterfacesImageUploaderResponse : FBValueObject <NSCopying>
{
    NSString *_imageHash;
    NSURL *_url;
}

@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
- (void).cxx_destruct;
- (id)initWithImageHash:(id)arg1 url:(id)arg2;

@end

