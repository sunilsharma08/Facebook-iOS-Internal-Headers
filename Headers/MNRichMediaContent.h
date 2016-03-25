//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSURL;

@interface MNRichMediaContent : NSObject <NSCopying>
{
    unsigned int _subtype;
    NSURL *_uRLKey_contentURL;
    NSData *_dataKey_contentData;
}

+ (id)uRLKeyWithContentURL:(id)arg1;
+ (id)dataKeyWithContentData:(id)arg1;
- (void).cxx_destruct;
- (void)matchURLKey:(CDUnknownBlockType)arg1 dataKey:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

