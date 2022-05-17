//
//  JXGroupDisband.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/11/16.
//

#import <Foundation/Foundation.h>
#import "JXGroupUser.h"
NS_ASSUME_NONNULL_BEGIN

/**
 * 解散群聊
 */
@interface JXGroupDisband : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

@end

/**
 * 解散群聊通知
 */
@interface JXGroupDisbandResp : NSObject

/** 解散人 */
@property (nonatomic,strong) JXGroupUser *optUser;

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

@end

NS_ASSUME_NONNULL_END
