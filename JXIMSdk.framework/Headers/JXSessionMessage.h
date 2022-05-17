//
//  JXSessionMessage.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/9/16.
//

#import <Foundation/Foundation.h>
#import "JXIMMessage.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    /** 未知 */
    JXSessionType_unknown = 0,
    JXSessionType_single,
    JXSessionType_group,
} JXSessionType;

@interface JXSessionMessage : NSObject

/** Session ID */
@property(nonatomic, copy) NSString *sessionId;

/** 用户ID */
@property(nonatomic, copy) NSString *userOpenId;

/** 目标ID */
@property(nonatomic, copy) NSString *targetOpenId;

/** 创建时间 */
@property(nonatomic, copy) NSString *addTime;

/** 最后一条消息 */
@property(nonatomic, strong) JXIMMessage *lastMessage;

/** 会话类型 */
@property(nonatomic, assign) JXSessionType sessionType;

/** 扩展字段 */
@property (nonatomic, strong) NSString *ext;

/** 未读消息数 */
@property (nonatomic, assign) NSInteger redPoint;

/** 是否置顶 */
@property(nonatomic,assign) BOOL isTop;

/** 是否免打扰 */
@property (nonatomic,assign) BOOL isNoDisturb;

/** 是否有人@我 */
@property (nonatomic,assign) BOOL isATMe;

@end

NS_ASSUME_NONNULL_END
