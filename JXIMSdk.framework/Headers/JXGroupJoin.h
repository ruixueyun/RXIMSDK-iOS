//
//  JXGroupJoin.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/12/31.
//

#import <Foundation/Foundation.h>
#import "JXGroupMembers.h"
/**
 * 加入群聊
 */
@interface JXGroupJoin : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

/** 加入用户openid */
@property(nonatomic, copy) NSString *openId;

/** 加入用户option */
@property(nonatomic, assign) NSInteger option;

@end

/**
 * 加入群聊响应
 **/
@interface JXGroupJoinResp : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

/** 群名 */
@property(nonatomic, copy) NSString *groupName;

@end
