//
//  JXIMGroupManager.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/8/23.
//

#import <Foundation/Foundation.h>
#import "JXGroupInfo.h"
#import "JXGroupCreate.h"
#import "JXGroupInvite.h"
#import "JXGroupLeave.h"
#import "JXGroupKickMember.h"
#import "JXGroupDisband.h"
#import "JXGroupJoin.h"
#import "JXGroupUpdate.h"
#import "JXUser.h"
#import "JXGroupUser.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JXIMGroupManagerDelegate <NSObject>

@optional
/**
 * 创建群聊响应
 */
-(void)groupCreateChatResp:(JXGroupCreateResp *)resp;

/**
 * 群邀约响应
 */
-(void)groupInviteResp:(JXGroupInviteResp *)resp;

/**
 * 离开群响应
 */
-(void)groupLeaveResp:(JXGroupLeaveResp *)resp;

/**
 * 踢出群响应
 */
-(void)groupKickMemberResp:(JXGroupKickMemberResp *)resp;

/**
 * 解散群响应
 */
-(void)groupDisbandResp:(JXGroupDisbandResp *)resp;

/**
 * 加入群聊响应
 */
- (void)groupJoinResp:(JXGroupJoinResp *)resp;

/**
 * 获取群信息响应
 */
-(void)groupInfoResp:(JXGroupInfoResp *)resp;

/**
 * 修改群信息响应
 */
-(void)groupUpdateResp:(JXGroupUpdate *)resp;

@end

@interface JXIMGroupManager : NSObject


@property (nonatomic,weak) id<JXIMGroupManagerDelegate> delegate;

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 创建群聊
 */
-(void)createGroup:(JXGroupCreate *)groupCreate;

/**
 * 群聊邀约
 */
-(void)groupInvite:(JXGroupInvite *)groupInvite;

/**
 * 加入群聊
 */
-(void)groupJoin:(JXGroupJoin *)groupJoin;

/**
 * 离开群聊
 */
-(void)leaveGroup:(JXGroupLeave *)groupLeave;

/**
 * 请求将成员踢出群聊, 只有群主或群管理员可执行此操作
 */
-(void)kickGroupMember:(JXGroupKickMember *)kickMember;

/**
 * 解散群聊, 只有群主可以解散群
 */
-(void)disbandGroup:(JXGroupDisband *)groupDisband;

/**
 * 获取群信息（返回的是本地库的群信息，线上最新的群信息通过groupInfoResp代理返回）
 */
-(JXGroupInfo *)getGroupInfo:(JXGroupInfoReq *)groupInfoReq;

/**
 * 修改群信息
 */
- (void)updateGroupInfo:(JXGroupUpdate *)groupUpdate;


@end

NS_ASSUME_NONNULL_END
