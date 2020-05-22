//
//  TYICTRTCViewMgr.h
//  TIC_Web_SaaS_SDK
//
//  Created by AlexiChen on 2020/5/7.
//  Copyright © 2020 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TXLiteAVSDK_TRTC/TRTCCloudDef.h>

@interface TYICTRTCLayoutItem : NSObject

@property (nonatomic, copy, nullable) NSString *holder;         // 头像地址
@property (nonatomic, copy, nullable) NSString *userId;         // userId
@property (nonatomic, copy, nullable) NSString *userNick;       // 昵称
@property (nonatomic, strong, nullable) NSDictionary *style;    // 扩展样式
@property (nonatomic, assign) NSInteger type;                   // 布局类型 : 0 音频，1 视频
@property (nonatomic, assign) TRTCVideoStreamType viewType;     // 显示的画面类型
@property (nonatomic, assign) float whRatio;                    // 宽高比
@property (nonatomic, assign) bool isTeacher;                   // 是否是老师
@property (nonatomic, assign) bool micAvaliable;                // 是否有声音
@property (nonatomic, assign) bool cameraAvaliable;             // 是否显示摄像头画面
@property (nonatomic, assign) bool subStreamAvaliable;          // 是否显示的辅流

@end

@interface TYICTRTCLayoutInfo : NSObject
@property (nonatomic, assign) NSInteger layoutType;             // 布局类型
@property (nonatomic, assign) NSInteger horSpace;               // 水平间距
@property (nonatomic, assign) NSInteger verSpace;               // 垂直间距
@property (nonatomic, assign) NSInteger gridRows;               // 如果是grid水平展示时行数
@property (nonatomic, assign) NSInteger gridColumns;            // 如果是grid垂直展示时列数
@property (nonatomic, copy, nullable) NSString *layoutId;       // 布局标识
@property (nonatomic, strong, nullable) NSArray<TYICTRTCLayoutItem *> *layoutItems;  // 子布局信息

@end


@protocol TYICRenderViewSource <NSObject>
@required
- (TXView * _Nullable)renderViewOf:(NSString * _Nullable)userid viewType:(TRTCVideoStreamType)type;
- (void)stopRenderViewOf:(NSString * _Nullable)userid viewType:(TRTCVideoStreamType)type;
- (void)stopAllRenderView;
@end

@interface TYICTRTCViewMgr : NSObject<TYICRenderViewSource>

@property (nonatomic, weak, nullable) UIViewController *containerController;

- (void)relayoutVideoPanel:(NSDictionary *_Nullable)areaInfo mainWebSize:(CGSize)size;
- (void)updateWithLayoutInfo:(TYICTRTCLayoutInfo *_Nonnull)info mainWebSize:(CGSize)size;
- (void)showVideoLayout:(BOOL)show;
@end
