
#import <UIKit/UIKit.h>

// forward declarations
@class GridCircle, GridPoint, GridCircleGroupCollection;

@interface GridVisualizerManager : NSObject

@property(assign, nonatomic) NSInteger numColumns;
@property(assign, nonatomic) NSInteger lastNumRows;
@property(assign, nonatomic) CGRect viewBounds;
@property(strong, nonatomic) GridCircleGroupCollection *circleGroups;
@property(strong, nonatomic) NSMutableArray *gridPoints;
@property(assign, nonatomic) BOOL circleChangeDetected;

- (void)setupGridPoints;
- (void)applyCirclesToGrid;
- (void)calculateCurrentGrid:(float)animationPercent;
- (UIBezierPath *)currentGridPath;
- (UIBezierPath *)currentCirclesPath;
- (UIBezierPath *)currentIntersectionLinesPath;
- (CGPoint)displayCoordsForPoint:(CGPoint)point;

- (BOOL)hasViewBounds;
- (void)updateNumColumns:(NSInteger)newNumColumns;

- (void)addCircleWithIdentifier:(NSString *)ident normCenter:(CGPoint)center radius:(CGFloat)radius strength:(CGFloat)strength ;
// - (GridCircle *)circleWithIdentifier:(NSString *)ident;
- (void)removeCircleWithIdentifier:(NSString *)ident;
- (void)prepareGridPointsForAnimation;
- (void)calculateCircleWidthBasedCenters;

// - (GridPoint)applyCircle:(GridCircle)circle toPoint:(GridPoint)gridPoint coordinateCenter:(CGPoint)coordinateCenter coordinateRadius:(CGFloat)coordinateRadius circleIndex:(NSInteger)circleIndex;
// - (void)createArcsFromIntersectingCircles;

@end