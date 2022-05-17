//
//  JXGroupLeave.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/11/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/**
 * 退出群聊
 */
@interface JXGroupLeave : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

@end

/**
 * 退出群聊响应
 */
@interface JXGroupLeaveResp : NSObject

/** 退出人 OpenID */
@property(nonatomic, copy) NSString *userOpenId;

/** 群id */
@property(nonatomic,copy) NSString *groupId;

@end

NS_ASSUME_NONNULL_END
