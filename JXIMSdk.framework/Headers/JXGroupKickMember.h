//
//  JXGroupKickMember.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/11/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * 将成员踢出群聊
 */
@interface JXGroupKickMember : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

/** 被踢人 OpenID */
@property(nonatomic, copy) NSString *userOpenId;

@end


/**
 * 踢出群聊响应
 */
@interface JXGroupKickMemberResp : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

@end

NS_ASSUME_NONNULL_END
