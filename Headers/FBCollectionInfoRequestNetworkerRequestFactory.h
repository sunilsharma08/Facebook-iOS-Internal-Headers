//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBCollectionInfoRequestNetworkerRequestFactory : NSObject
{
}

+ (id)_requestForSession:(id)arg1 httpMethod:(id)arg2 targetID:(id)arg3 fieldTypes:(id)arg4 message:(id)arg5 location:(id)arg6 queuePerformer:(id)arg7;
+ (id)cancelRequestWithSession:(id)arg1 targetID:(id)arg2 fieldType:(id)arg3 location:(id)arg4 queuePerformer:(id)arg5;
+ (id)askRequestWithSession:(id)arg1 targetID:(id)arg2 fieldType:(id)arg3 message:(id)arg4 location:(id)arg5 queuePerformer:(id)arg6;

@end

