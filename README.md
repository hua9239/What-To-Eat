# What-To-Eat 今天吃什麼

## TODO
- [ ] class `Restaurant` and `Food`
- [ ] Deep Random
- [ ] csv file
- [ ] 飲料 vector
- [ ] 早/午/晚/宵 篩選

## 藍圖
```
food:
    serial, name, price

restaurant:
    name, vector of food

gen random:
    use random & chrono
    seed <- ms <- now
    set random engine seed
    gen random number
    return

vector of restaurant

for each restaurant
    for each food
        find match serial food
            print
            break
```

```
csv format:
    Restaurant restaurant("KFC");
    Restaurant restaurant("711");
    Restaurant restaurant("媽媽樂");
    Restaurant restaurant("花果山");
    Restaurant restaurant("好吃炒飯");

    restaurant name, food name, price
    restaurant name, food name, price
    ...
    restaurant.addFood(1, "Burger", 5.99);
    restaurant.addFood(2, "Pizza", 6.99);
    restaurant.addFood(3, "Salad", 3.99);
    restaurant.addFood(3, "french fries", 1.99);
    restaurant.addFood(3, "taco", 5.99);

    removeFood(id) {
        if (this.menu.has(id)) {
            this.menu.delete(id);
            console.log(`成功從餐車移除 ${id} `);
        } else {
            console.log(` ${id} 不存在於餐車內`);
        }
    }

vector of exist restaurant
serial = 0

for each line
    if row[0] not in exist list
        add new restaurant and put into exist list

    find index of restaurant
        restaurant[index].add(food(row[1], row[2], serial++))
```

## Members:
- B2209239 黃郁鈞
- A9223218 陳彥杰
- A9251041 胡凱棠
