//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFontResource;

@interface FBFontDownloadState : NSObject
{
    CDUnknownBlockType _completionBlock;
    FBFontResource *_fontResource;
}

@property(readonly, nonatomic) FBFontResource *fontResource; // @synthesize fontResource=_fontResource;
- (void).cxx_destruct;
- (void)generateResponseWithURL:(id)arg1 error:(id)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithFontResource:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

