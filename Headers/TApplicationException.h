//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TException.h"

@interface TApplicationException : TException
{
    int mType;
}

+ (id)exceptionWithType:(int)arg1 reason:(id)arg2;
+ (id)read:(id)arg1;
- (void)write:(id)arg1;
- (id)initWithType:(int)arg1 reason:(id)arg2;

@end

