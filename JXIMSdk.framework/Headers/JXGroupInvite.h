//
//  JXGroupInvite.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/11/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * 邀约的用户信息
 */
@interface JXJoinMembers : NSObject

/** 用户 OpenID */
@property(nonatomic, copy) NSString *userOpenId;

/** 扩展信息 */
@property(nonatomic, copy) NSString *ext;

@end

/**
 * 群邀约
 */
@interface JXGroupInvite : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

/** 成员 OpenID 列表 */
@property(nonatomic, strong) NSMutableArray<NSString*> *membersArray;

@end


/**
 * 群邀约通知
 */
@interface JXGroupInviteResp : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;


@end

NS_ASSUME_NONNULL_END
