//
//  JXGroupMembers.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/12/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * 加入群成员信息
 */
@interface JXGroupMembers : NSObject

/** 用户 OpenID */
@property(nonatomic, copy) NSString *userOpenId;

/** 控制选项(位运算组合) */
@property(nonatomic, assign) NSInteger option;

/** 加入时间 */
@property(nonatomic, copy) NSString *joinTime;

/** 扩展信息 */
@property(nonatomic, copy) NSString *ext;

@end

NS_ASSUME_NONNULL_END
