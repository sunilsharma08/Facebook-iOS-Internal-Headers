//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSURLResponse;

@interface FBPlatformCachedURLResponse : NSObject <NSCoding>
{
    NSData *_data;
    NSURLResponse *_response;
}

@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

