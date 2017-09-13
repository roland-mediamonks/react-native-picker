//
//  BzwPicker.h
//  PickerView
//
//  Created by Bao on 15/12/14.
//  Copyright © 2015年 Microlink. All rights reserved.
//

#import <UIKit/UIKit.h>

#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)


typedef void(^backBolock)(NSDictionary * );

@interface BzwPicker : UIView<UIPickerViewDataSource,UIPickerViewDelegate>

@property (strong,nonatomic)UIPickerView *pick;

@property(nonatomic,copy)backBolock bolock;

@property (strong, nonatomic) NSDictionary *pickerDic;

@property(strong,nonatomic)NSArray *dataDry;

@property (strong, nonatomic) NSMutableArray *provinceArray;
@property (strong, nonatomic) NSMutableArray *cityArray;
@property (strong, nonatomic) NSArray *townArray;


@property(strong,nonatomic)NSArray *selectthreeAry;

@property (strong,nonatomic)NSArray *selectArry;

@property (strong,nonatomic)UIButton *leftBtn;
@property (strong,nonatomic)UIButton *rightBtn;

@property(strong,nonatomic)NSString *leftStr;
@property(strong,nonatomic)NSString *centStr;
@property(strong,nonatomic)NSString *rightStr;;
@property(strong,nonatomic)NSString *pickerToolBarFontSize;
@property(strong,nonatomic)NSString *pickerToolBarFont;
@property(strong,nonatomic)NSString *pickerFontSize;
@property(strong,nonatomic)NSArray*pickerFontColor;



@property(assign,nonatomic)BOOL Correlation;

@property(nonatomic,strong)NSString *numberCorrela;

@property(nonatomic,strong)NSArray *noCorreArry;

//创建一个数组来传递返回的值
@property(nonatomic,strong)NSMutableArray *backArry;

@property(assign,nonatomic)BOOL noArryElementBool;

@property(strong,nonatomic)NSMutableArray *infoArry;

//创建一个数组 接收进来的选择Value

@property(strong,nonatomic)NSArray *selectValueArry;

@property(strong,nonatomic)NSArray *weightArry;

@property(assign,nonatomic)CGFloat lineWith;
//创建一个下角标记录是第几行 来一进来判断第一行被选中 当进来的是关联两行的逻辑的时候 或者三行关联的时候取第二行做记录

@property(assign,nonatomic)NSInteger num;

//创建一个下角标 第三行做记录

@property(assign,nonatomic)NSInteger threenum;

@property(assign,nonatomic)NSInteger seleNum;//用来做索引下标用



-(instancetype)initWithFrame:(CGRect)frame
    dic:(NSDictionary *)dic
    leftStr:(NSString *)leftStr
    centerStr:(NSString *)centerStr
    rightStr:(NSString *)rightStr
    topbgColor:(NSArray *)topbgColor
    bottombgColor:(NSArray *)bottombgColor
    leftbtnbgColor:(NSArray *)leftbtnbgColor
    rightbtnbgColor:(NSArray *)rightbtnbgColor
    centerbtnColor:(NSArray *)centerbtnColor
    selectValueArry:(NSArray *)selectValueArry
    weightArry:(NSArray *)weightArry
    pickerToolBarFontSize:(NSString *)pickerToolBarFontSize
    pickerToolBarFont:(NSString *)pickerToolBarFont
    pickerFontSize:(NSString *)pickerFontSize
    pickerFontColor:(NSArray *)pickerFontColor;

-(void)selectRow;
@end
