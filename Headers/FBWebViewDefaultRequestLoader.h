//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBWebViewRequestLoader.h"

@interface FBWebViewDefaultRequestLoader : FBWebViewRequestLoader
{
    BOOL _loading;
}

- (void)loadRequestIfReady;
- (BOOL)isLoading;
- (id)initWithRequest:(id)arg1;

@end

