//
//  JXGroupUpdate.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/12/31.
//

#import <Foundation/Foundation.h>
#import "JXGroupUser.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : int32_t {
    GroupOptionType_transfer = 1,   //转让群组
    GroupOptionType_attr = 2,       //修改属性
    GroupOptionType_control = 3,    //修改控制
    GroupOptionType_groupName = 4,  //修改群名
    GroupOptionType_setAdmin = 5,   //设置管理员
    GroupOptionType_noitce = 6,     //修改群公告
} GroupOptionType;

/**
 * 修改群信息
 */
@interface JXGroupUpdate : NSObject

/** 操作类型 */
@property(nonatomic, assign) GroupOptionType type;

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

/** 转让群主  type为1时传 */
@property(nonatomic, copy) NSString *creator;

/** 属性 type为2时传 */
@property(nonatomic, assign) NSInteger attr;

/** 控制 type为3时传 */
@property(nonatomic, assign) NSInteger option;

/** 群名称 type为4时传 */
@property(nonatomic, copy) NSString *name;

/** 设置群管理员 type为5时传 */
@property(nonatomic, strong) NSMutableArray<NSString*> *adminsArray;

/** 群公告 type为6时传 */
@property(nonatomic, copy) NSString *notice;

/** 操作人员信息 */
@property(nonatomic, strong) JXGroupUser *optUser;

@end

NS_ASSUME_NONNULL_END
