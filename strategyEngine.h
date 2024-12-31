#pragma once
#include "DataModule.h"
#include "Strategies.h"
#include "Portfolio.h"
#include <queue>
#include <numeric>

// ---------------------  Backtesting Engine  -------------------------------------------
class BacktestingEngine {
public:
    // Run the backtest with the data module, strategy, and portfolio
    void runBacktest(DataModule& dataModule, Strategy& strategy, Portfolio& portfolio);
};