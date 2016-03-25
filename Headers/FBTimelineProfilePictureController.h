//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemPerson, FBUserSession, NSArray, NSString, NSURL;
@protocol FBTimelineProfilePictureControllerDelegate;

@interface FBTimelineProfilePictureController : NSObject
{
    NSString *_personID;
    NSURL *_profilePictureHighResImageURL;
    NSArray *_profilePictureLowResImageURLs;
    FBUserSession *_session;
    struct CGImage *_highResImage;
    struct CGImage *_lowResImage;
    BOOL _highResDownloadPending;
    float _size;
    CDUnknownBlockType _logBlock;
    BOOL _canDownloadHighRes;
    FBMemPerson *_person;
    id <FBTimelineProfilePictureControllerDelegate> _delegate;
    id _highResImageDownload;
    id _lowResImageDownload;
    id _lowResCachedImageFetch;
}

@property(retain, nonatomic) id lowResCachedImageFetch; // @synthesize lowResCachedImageFetch=_lowResCachedImageFetch;
@property(retain, nonatomic) id lowResImageDownload; // @synthesize lowResImageDownload=_lowResImageDownload;
@property(retain, nonatomic) id highResImageDownload; // @synthesize highResImageDownload=_highResImageDownload;
@property(nonatomic) __weak id <FBTimelineProfilePictureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL canDownloadHighRes; // @synthesize canDownloadHighRes=_canDownloadHighRes;
@property(retain, nonatomic) FBMemPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (BOOL)shouldShowBlankState:(id)arg1;
- (BOOL)isViewingSelf:(id)arg1;
- (void)_cancelExistingDownload:(id)arg1;
- (void)_handleImageDownloadResponseForURL:(id)arg1 withImage:(struct CGImage *)arg2 isLowRes:(BOOL)arg3 isCached:(BOOL)arg4;
- (void)_fetchLowResImages:(id)arg1;
- (void)_downloadImage:(id)arg1 isLowRes:(BOOL)arg2;
- (void)_handleHighResImageUpdates:(id)arg1;
- (void)_handleLowResImageUpdates:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSession:(id)arg1 size:(float)arg2 logBlock:(CDUnknownBlockType)arg3;

@end

