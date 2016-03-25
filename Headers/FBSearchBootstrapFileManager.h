//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileManager, NSURL;

@interface FBSearchBootstrapFileManager : NSObject
{
    NSFileManager *_fileManager;
    NSURL *_storeURL;
}

@property(readonly, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (id)getFileSize:(id)arg1;
- (id)loadBootstrapDataFile:(id)arg1;
- (BOOL)saveBootstrapData:(id)arg1 toFile:(id)arg2;
- (BOOL)deleteBootstrapDataFile:(id)arg1;
- (BOOL)fileExists:(id)arg1;
- (id)_bootstrapFileDirectory:(BOOL)arg1;
- (id)bootstrapFileDirectoryCreateIfNecessary;
- (id)bootstrapFileDirectory;
- (id)initWithFileManager:(id)arg1 storeURL:(id)arg2;

@end

