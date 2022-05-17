//
//  JXGroupInfo.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/11/15.
//

#import <Foundation/Foundation.h>

/**
 * 群信息
 */
@interface JXGroupInfo : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

/** 群名称 */
@property(nonatomic, copy) NSString *name;

/** 群主 */
@property(nonatomic, copy) NSString *creator;

/** 扩展属性 */
@property(nonatomic, assign) NSInteger attr;

/** 群控制选项 */
@property(nonatomic, assign) NSInteger option;

/** 群公告 */
@property(nonatomic, copy) NSString *notice;

/** 群成员信息 */
@property(nonatomic, strong) NSMutableArray *memberInfosArray;

@end

/**
 * 获取群信息
 */
@interface JXGroupInfoReq : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

@end

/**
 * 群信息响应
 */
@interface JXGroupInfoResp : NSObject

/** 本用户对此群的选项参数 */
@property(nonatomic, assign) NSInteger option;

/** 本用户在此群扽扩展信息 */
@property(nonatomic, copy) NSString *ext;

/** 群消息 */
@property(nonatomic, strong) JXGroupInfo *groupInfo;

@end



