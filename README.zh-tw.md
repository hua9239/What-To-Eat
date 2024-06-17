<div align="center">
    <h1>What-To-Eat 今天吃什麼</h1>
    <img src="https://img.shields.io/badge/-Visual Studio Code-007ACC.svg?logo=visual-studio-code" title="Visual Studio Code">
    <!-- <img src="https://img.shields.io/badge/-Visual Studio-5C2D91.svg?logo=visual-studio" title="Visual Studio"> -->
    <img src="https://img.shields.io/badge/-C++-00599C.svg?logo=c%2B%2B" title="C++">
    <img src=https://img.shields.io/github/last-commit/hua9239/What-To-Eat>
    </br>
    <a href="./README.md"><img src=https://img.shields.io/badge/lang-EN-blue.svg title="English"></a>
    <a href="./README.zh-tw.md"><img src=https://img.shields.io/badge/lang-ZH--TW-red.svg title="Traditional Chinese"></a>
</div>

## 建置

1. 將專案複製到本地端
    ```bash
    git clone https://github.com/hua9239/What-To-Eat.git
    ```
2. 進入專案目錄
    ```bash
    cd What-To-Eat
    ```
3. 編譯專案
    ```bash
    g++ -o What-To-Eat.exe -I .\include\ .\src\Food.cpp .\src\main.cpp .\src\Restaurant.cpp
    ```

## 如何使用

### 需求

一個名為 `menu.csv` 的 csv 檔案，格式如下:
```csv
餐廳名稱,食物名稱,價格
```

### 執行程式

城市將會讀取 `menu.csv` 檔案，並隨機選擇一家餐廳和一樣食物來輸出。

## UML 與流程圖

### UML

```
┌────────────────────────┐   ┌──────────────────────┐
│          Food          │   │      Restaurant      │
├────────────────────────┤   ├──────────────────────┤
│+ name: String          │   │+ name: String        │
│+ serial: Integer       │   │+ menu: vector<Food>  │
│+ price: Integer        │   │                      │
├────────────────────────┤   ├──────────────────────┤
│+ Food(String,Int,Int)  │   │+ Restaurant(String)  │
└────────────────────────┘   └──────────────────────┘
```

### 流程圖

```
┌─────────────────────────────────────────────────────┐
│                     ┌───────────┐                   │
│                     │  讀取檔案  │                   │
│                     └───────────┘                   │
│                           │                         │
│                           ▼                         │
│                  ┌──────────────────┐               │
│  ┌─────────────► │  檢查餐廳是否存在  │              │
│  │               └──────────────────┘               │
│  │                  │            │                  │
│  │                  是           否                 │
│  │                  ▼            ▼                  │
│  │  ┌──────────────────────┐┌─────────────────┐     │
│  │  │  將食物添加到對應餐廳  ││  建立餐廳與食物  │     │
│  │  └──────────────────────┘└─────────────────┘     │
│  │                  │            │                  │
│  │                  └─────┬──────┘                  │
│  │                        │                         │
│  ▲                        ▼                         │
│  │                 ┌───────────────┐                │
│  │                 |   賦予序列號   |                │
│  │                 └───────────────┘                │
│  │                        │                         │
│  └─────────────◄──────────┘                         │
└─────────────────────────────────────────────────────┘



┌───────────────────────────────────────┐
│             ┌───────────┐             │
│             │  讀取黨案  │             │
│             └───────────┘             │
│                   |                   │
│                   ▼                   │
│           ┌────────────────┐          │
│  ┌──────► | 生成隨機序列號  |          │
│  │        └────────────────┘          │
│  │                |                   │
│  │                ▼                   │
│  │        ┌───────────────┐           │
│  │        | 尋找匹配的食物 |           │
│  │        └───────────────┘           │
│  │             |     |                │
│  │             否    是               │
│  └─────◄───────┘     │                │
│                      ▼                │
│          ┌─────────────────┐          │
│          |  輸出資料並離開  |          │
│          └─────────────────┘          │
└───────────────────────────────────────┘
```

## 組員:
- B2209239 黃郁鈞
- A9223218 陳彥杰
- A9251041 胡凱棠
