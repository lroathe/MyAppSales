//
//  CountrySummary.h
//  ASiST
//
//  Created by Oliver Drobnik on 04.01.09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Country;


@interface CountrySummary : NSObject {
	Country *country;
	NSInteger sumSales;
	NSInteger sumUpdates;
	NSInteger sumRefunds;
	
	NSString *royaltyCurrency;
	double sumRoyalites;
}

@property (nonatomic, retain) Country *country;
@property (nonatomic, assign) NSInteger sumSales;
@property (nonatomic, assign) NSInteger sumUpdates;
@property (nonatomic, assign) NSInteger sumRefunds;
@property (nonatomic, retain) NSString *royaltyCurrency;
@property (nonatomic, assign) double sumRoyalites;


- (id)initWithCountry:(Country *)country sumSales:(NSInteger)sales sumUpdates:(NSInteger)updates sumRefunds:(NSInteger)refunds; 
- (NSComparisonResult)compareBySales:(CountrySummary *)otherSummary;
@end