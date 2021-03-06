//
//  DownloadManager.h
//  iGitpad
//
//  Created by Johannes Lund on 2012-02-03.
//  Copyright (c) Anviking. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Download.h"

@interface DownloadManager : NSObject

+ (DownloadManager *)defaultManager; //Use this

- (void)pause;
- (void)resume;

- (void)addDownload:(Download *)download withCompletion:(CompletionBlock)completion;
- (void)addImportantDownload:(Download *)download withCompletion:(CompletionBlock)completion;
@property (nonatomic, strong, readonly) NSMutableDictionary *downloadQueue;
@property (nonatomic, strong, readonly) NSMutableDictionary *completedDownloads;
@property (nonatomic, strong, readonly) NSDate              *completedDownloadsResetDate;
@property (nonatomic, strong, readonly) Download            *currentDownload;
@end
