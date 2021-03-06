//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAddressBookReaderDelegate-Protocol.h"
#import "FBAddressBookSyncer-Protocol.h"

@class FBDeviceImportIdStore, NSString;
@protocol FBAddressBookReader, FBAddressBookSyncLoaderDelegate, FBLocalContactsUploader;

@interface FBAddressBookSyncLoader : NSObject <FBAddressBookSyncer, FBAddressBookReaderDelegate>
{
    id <FBAddressBookReader> _addressbookReader;
    FBDeviceImportIdStore *_deviceImportIdStore;
    BOOL _hasSyncBeenCancelled;
    BOOL _isWaitingOnAddressbookResponse;
    id <FBLocalContactsUploader> _localContactsUploader;
    id <FBAddressBookSyncLoaderDelegate> _delegate;
}

@property(nonatomic) id <FBAddressBookSyncLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelSyncFromAddressBook;
- (void)syncContactsFromAddressbook;
- (void)didReadAddressBookWithContacts:(id)arg1;
- (void)dealloc;
- (id)initWithLocalContactsUploader:(id)arg1 addressbookReader:(id)arg2 deviceImportIdStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

