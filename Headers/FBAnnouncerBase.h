//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBAnnouncerBase : NSObject
{
    struct shared_ptr<const std::__1::vector<__weak id, std::__1::allocator<__weak id>>> _listenerVector;
    struct Mutex _listenerAddRemoveLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end

