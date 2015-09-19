//
//  ALMessageService.h
//  ALChat
//
//  Copyright (c) 2015 AppLozic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ALConstant.h"

@interface ALMessageService : NSObject

+(void) getMessagesListGroupByContactswithCompletion:(void(^)(NSMutableArray * moments, NSError * error)) completion;

+(void) getMessageListForUser:(NSString *) userId startIndex:(NSString *) startIndex pageSize:(NSString *)pageSize endTimeInTimeStamp:(NSString *) endTimeStamp withCompletion:(void(^)(NSMutableArray * messages, NSError * error)) completion;

+(void) sendMessagesForUserInfo:(NSDictionary *)userInfo withCompletion:(void(^)(NSString * message, NSError * error)) completion;

+(void) sendPhotoForUserInfo:(NSDictionary *)userInfo withCompletion:(void(^)(NSString * message, NSError *error)) completion;


+(void) getLatestMessageForUser:(NSString *)userId lastSyncTime:(NSString*) lastSyncTime withCompletion:(void(^)(NSString * message, NSError *error)) completion;

@end
