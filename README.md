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

## Build

1. Clone the repository
    ```bash
    git clone https://github.com/hua9239/What-To-Eat.git
    ```
2. Navigate to the project directory
    ```bash
    cd What-To-Eat
    ```
3. Build the project
    ```bash
    g++ -o What-To-Eat.exe -I .\include\ .\src\Food.cpp .\src\main.cpp .\src\Restaurant.cpp
    ```

## How to use

### Requirements

Csv file Name: `menu.csv` with the following format:
```csv
Restaurant Name,Food Name,Price
```

### Run the program

It will read the `menu.csv` file and randomly select a restaurant and a food item from the file to output.

## UML and Flowchart

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

### Flowchart

```
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                      ┌───────────┐                                      │
│                                      │ Read File │                                      │
│                                      └───────────┘                                      │
│                                            │                                            │
│                                            ▼                                            │
│                           ┌──────────────────────────────────┐                          │
│  ┌──────────────────────► │ Check if the restaurant is exist │                          │
│  │                        └──────────────────────────────────┘                          │
│  │                                    │            │                                    │
│  │                                   YES           NO                                   │
│  │                                    ▼            ▼                                    │
│  │  ┌───────────────────────────────────────┐┌───────────────────────────────────────┐  │
│  │  │ Add the food to the restaurant's menu ││ Create a new restaurant with the food │  │
│  │  └───────────────────────────────────────┘└───────────────────────────────────────┘  │
│  │                                    │            │                                    │
│  │                                    └─────┬──────┘                                    │
│  │                                          │                                           │
│  ▲                                          ▼                                           │
│  │                                  ┌───────────────┐                                   │
│  │                                  | Assign serial |                                   │
│  │                                  └───────────────┘                                   │
│  │                                          │                                           │
│  └──────────────────────◄───────────────────┘                                           │
└─────────────────────────────────────────────────────────────────────────────────────────┘



┌───────────────────────────────────────┐
│             ┌───────────┐             │
│             │ Read File │             │
│             └───────────┘             │
│                   |                   │
│                   ▼                   │
│       ┌────────────────────────┐      │
│  ┌──► | Generate random serial |      │
│  │    └────────────────────────┘      │
│  │                |                   │
│  │                ▼                   │
│  │        ┌───────────────┐           │
│  │        | Find the Food |           │
│  │        └───────────────┘           │
│  │             |     |                │
│  │             NO   YES               │
│  └──◄──────────┘     │                │
│                      ▼                │
│          ┌─────────────────┐          │
│          | Print it & exit |          │
│          └─────────────────┘          │
└───────────────────────────────────────┘
```

## Members:
- B2209239 黃郁鈞
- A9223218 陳彥杰
- A9251041 胡凱棠
