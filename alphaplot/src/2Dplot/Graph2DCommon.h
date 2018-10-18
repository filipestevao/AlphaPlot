#ifndef GRAPH2DCOMMON_H
#define GRAPH2DCOMMON_H

class Column;
class Table;

namespace Graph2DCommon {
enum class LineStyleType : int {
  StepLeft = 0,
  StepRight = 1,
  StepCenter = 2,
  Impulse = 3,
};

enum class ScatterStyle : int {
  None = 0,
  Dot = 1,
  Cross = 2,
  Plus = 3,
  Circle = 4,
  Disc = 5,
  Square = 6,
  Diamond = 7,
  Star = 8,
  Triangle = 9,
  TriangleInverted = 10,
  CrossSquare = 11,
  PlusSquare = 12,
  CrossCircle = 13,
  PlusCircle = 14,
  Peace = 15,
};

enum class Picker : int {
  None = 0,
  DataPoint = 1,
  DataGraph = 2,
  DataMove = 3,
  DataRemove = 4,
};

enum class PlotType { Associated, Function };
}  // namespace Graph2DCommon

namespace PlotData {
struct AssociatedData {
  Table *table;
  Column *xcol;
  Column *ycol;
  int from;
  int to;
  AssociatedData() : table(nullptr), xcol(nullptr), ycol(nullptr) {}
};
}  // namespace PlotData

#endif  // GRAPH2DCOMMON_H