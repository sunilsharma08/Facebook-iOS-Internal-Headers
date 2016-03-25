//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;

@interface FBImagePrefetchController : NSObject
{
    FBUserSession *_session;
    struct Mutex _lock;
}

+ (void)setDisableImagePrefetch:(BOOL)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)prefetchImageUseImageStreamerForURL:(id)arg1 desiredImageFlag:(unsigned int)arg2 scenePath:(id)arg3 analyticsModule:(id)arg4;
- (void)prefetchImageForURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3;
- (void)prefetchImageForSpecifier:(id)arg1;
- (id)_prefetchImageWithURL:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 useImageStreamer:(BOOL)arg4 desiredImageFlag:(unsigned int)arg5;
- (id)initWithSession:(id)arg1;

@end

