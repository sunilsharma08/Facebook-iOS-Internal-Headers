//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBEventEditController, NSString;

@protocol FBEventEditControllerDelegate <NSObject>
- (void)controller:(FBEventEditController *)arg1 createdOrModifiedEventWithID:(NSString *)arg2;

@optional
- (void)dismissEventEditController:(FBEventEditController *)arg1;
- (void)controller:(FBEventEditController *)arg1 cancelledEventWithID:(NSString *)arg2;
@end

