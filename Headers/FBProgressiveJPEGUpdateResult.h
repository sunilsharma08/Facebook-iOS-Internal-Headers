//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError;

@interface FBProgressiveJPEGUpdateResult : NSObject
{
    NSError *_error;
    unsigned int _imageFlag;
}

+ (id)newWithImageFlag:(unsigned int)arg1 error:(id)arg2;
@property(readonly, nonatomic) unsigned int imageFlag; // @synthesize imageFlag=_imageFlag;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end

