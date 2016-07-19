//
//  XSQRCodeReader.h
//  XinShi
//
//  Created by huiren on 16/7/18.
//  Copyright © 2016年 zdsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol QRCodeReaderViewDelegate <NSObject>
- (void)readerScanResult:(NSString *)result;
@end

@interface XSQRCodeReader : UIView

@property (nonatomic, weak) id<QRCodeReaderViewDelegate> delegate;
@property (nonatomic,copy)UIImageView * readLineView;
@property (nonatomic,assign)BOOL is_Anmotion;
@property (nonatomic,assign)BOOL is_AnmotionFinished;

//开启关闭扫描
- (void)start;
- (void)stop;

- (void)loopDrawLine;//初始化扫描线

@end
