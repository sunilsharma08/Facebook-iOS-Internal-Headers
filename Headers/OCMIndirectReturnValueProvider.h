//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface OCMIndirectReturnValueProvider : NSObject
{
    id provider;
    SEL selector;
}

- (void)handleInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 andSelector:(SEL)arg2;

@end

