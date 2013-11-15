//
//  CCSCandleStickChart.h
//  Cocoa-Charts
//
//  Created by limc on 11-10-24.
//  Copyright 2011 limc.cn All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "CCSStickChart.h"


typedef enum {
    CCSCandleStickStyleStandard,            //Standard Candle Style
    CCSCandleStickStyleBar,                 //American Bar Style
    CCSCandleStickStyleLine,                //Close Line Style
} CCSCandleStickStyle;


/*!
 CCSCandleStickChart
 
 CCSCandleStickChart is a kind of graph that draw the OHLCs on a CCSGridChart
 if you want display some moving average lines on this graph, please use see
 CCSMACandleStickChart for more information
 
 CCSCandleStickChartはCCSGridChartの表面でロウソクを書いたラインチャードです。移動平均線など
 分析線がお使いしたい場合、CCSMACandleStickChartにご参照ください。
 
 CCSCandleStickChart是在CCSGridChart上绘制K线（蜡烛线）的图表、如果需要支持显示均线，请参照
 CCSMACandleStickChart。
 */
@interface CCSCandleStickChart : CCSStickChart {
    UIColor *_positiveStickBorderColor;
    UIColor *_positiveStickFillColor;
    UIColor *_negativeStickBorderColor;
    UIColor *_negativeStickFillColor;
    UIColor *_crossStarColor;
    
    NSInteger _candleStickStyle;
}

/*!
 Price up stick's border color
 値上がりローソクのボーダー色
 阳线的边框颜色
 */
@property(retain, nonatomic) UIColor *positiveStickBorderColor;

/*!
 Price up stick's fill color
 値上がりローソクの色
 阳线的填充颜色
 */
@property(retain, nonatomic) UIColor *positiveStickFillColor;

/*!
 Price down stick's border color
 値下りローソクのボーダー色
 阴线的边框颜色
 */
@property(retain, nonatomic) UIColor *negativeStickBorderColor;

/*!
 Price down stick's fill color
 値下りローソクの色
 阴线的填充颜色
 */
@property(retain, nonatomic) UIColor *negativeStickFillColor;

/*!
 Price no change stick's color (cross-star,T-like etc.)
 クローススターの色（価格変動無し）
 十字线显示颜色（十字星,一字平线,T形线的情况）
 */
@property(retain, nonatomic) UIColor *crossStarColor;


@property(assign, nonatomic) NSInteger candleStickStyle;

@end
