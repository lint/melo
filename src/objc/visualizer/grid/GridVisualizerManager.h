
#import <UIKit/UIKit.h>
#import "grid_structs.h"


@interface GridVisualizerManager : NSObject {
    GridPoint **_gridPoints;
    GridCircle *_gridCircles;
}

@property(assign, nonatomic) NSInteger numColumns;
@property(assign, nonatomic) NSInteger lastNumRows;
@property(assign, nonatomic) CGRect viewBounds;
// @property(strong, nonatomic) NSMutableDictionary *circles;
@property(assign, nonatomic) BOOL circleChangeDetected;
@property(assign, nonatomic) NSInteger numCircles;
@property(assign, nonatomic) NSInteger maxNumCircles;
@property(strong, nonatomic) NSMutableArray *circleGroups;
@property(strong, nonatomic) NSMutableArray *gridArcShapes;

- (void)setupGridPoints;
- (void)applyCirclesToGrid;
- (void)calculateCurrentGrid:(float)animationPercent;
- (UIBezierPath *)currentGridPath;
- (UIBezierPath *)currentCirclesPath;

- (BOOL)hasViewBounds;
- (void)updateNumColumns:(NSInteger)newNumColumns;
- (void)addCircleWithIdentifier:(NSString *)ident normCenter:(CGPoint)center radius:(CGFloat)radius strength:(CGFloat)strength ;
- (GridCircle *)circleWithIdentifier:(NSString *)ident;
- (void)removeCircleWithIdentifier:(NSString *)ident;
- (void)prepareGridPointsForAnimation;
- (void)resizeGridCirclesArrayIfNeeded:(NSInteger)nextInsertionIndex;
// - (GridPoint)applyCircle:(GridCircle)circle toPoint:(GridPoint)gridPoint coordinateCenter:(CGPoint)coordinateCenter coordinateRadius:(CGFloat)coordinateRadius circleIndex:(NSInteger)circleIndex;
- (CGFloat)calculateDistanceBetweenPoint:(CGPoint *)p1 andPoint:(CGPoint *)p2;
// - (void)createArcsFromIntersectingCircles;
- (void)calculateCircleWidthBasedCenters;
@end