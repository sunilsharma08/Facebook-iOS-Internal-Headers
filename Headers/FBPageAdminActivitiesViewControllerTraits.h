//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBNotificationTableViewTraits, NSURL;

@interface FBPageAdminActivitiesViewControllerTraits : FBValueObject <NSCopying>
{
    BOOL _shouldShowMessagesInLinks;
    BOOL _shouldShowPMAUpsell;
    NSURL *_messagesURL;
    FBNotificationTableViewTraits *_notificationTableViewTraits;
}

@property(readonly, copy, nonatomic) FBNotificationTableViewTraits *notificationTableViewTraits; // @synthesize notificationTableViewTraits=_notificationTableViewTraits;
@property(readonly, nonatomic) BOOL shouldShowPMAUpsell; // @synthesize shouldShowPMAUpsell=_shouldShowPMAUpsell;
@property(readonly, copy, nonatomic) NSURL *messagesURL; // @synthesize messagesURL=_messagesURL;
@property(readonly, nonatomic) BOOL shouldShowMessagesInLinks; // @synthesize shouldShowMessagesInLinks=_shouldShowMessagesInLinks;
- (void).cxx_destruct;
- (id)initWithShouldShowMessagesInLinks:(BOOL)arg1 messagesURL:(id)arg2 shouldShowPMAUpsell:(BOOL)arg3 notificationTableViewTraits:(id)arg4;

@end

