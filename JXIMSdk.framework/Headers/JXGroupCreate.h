//
//  JXGroupCreate.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * 群创建
 */
@interface JXGroupCreate : NSObject

/** 成员 OpenID 列表 */
@property(nonatomic, strong) NSMutableArray<NSString*> *membersArray;

/** 群名称 */
@property(nonatomic, copy) NSString *name;

/** 群公告 */
@property(nonatomic, copy) NSString *notice;

/** 群选项 */
@property(nonatomic, assign) NSInteger option;

@end

/**
 * 群创建响应, 创建成功后会同时生成新会话
 */
@interface JXGroupCreateResp : NSObject

/** 群 OpenID */
@property(nonatomic, copy) NSString *groupId;

/** 群名称 */
@property(nonatomic, copy) NSString *name;

@end



NS_ASSUME_NONNULL_END
