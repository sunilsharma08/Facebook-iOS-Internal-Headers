//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAnalyticsPerfLogger, FBMemPhoto;

@interface FBPhotoViewControllerSpinnerLogger : NSObject
{
    FBMemPhoto *_currentPhoto;
    unsigned int _numberOfPhotosQueued;
    FBAnalyticsPerfLogger *_perfLogger;
}

- (void).cxx_destruct;
- (void)_stopEventWithStatus:(id)arg1 spinnerWasShown:(BOOL)arg2;
- (void)cancel;
- (void)spinnerEndForPhoto:(id)arg1 status:(id)arg2 spinnerWasShown:(BOOL)arg3;
- (void)expectSpinnerEndForPhoto:(id)arg1 openingSource:(id)arg2;
- (BOOL)eventStarted;
- (id)initWithPerfLogger:(id)arg1;

@end

