# C 语言课堂练习（2026-10-15）


## 练习目录

| 文件 | 知识点 | 练习内容 |
|---|---|---|
| `01_even_odd.c` | `if/else`、`%` | 判断奇偶数 |
| `02_compound_interest.c` | `else if`、`double`、`pow` | 按不同年限计算复利 |
| `03_three_digit_split.c` | 整数 `/`、取余 `%` | 分离三位数的个位、十位、百位 |
| `04_uppercase_to_lowercase.c` | `char`、`getchar`、`putchar` | 大写英文字母转小写 |
| `05_circle_area.c` | `#define`、浮点运算 | 计算圆面积 |
| `06_const_and_assignment.c` | 赋值与 `const` | 改变变量、使用常量 |
| `07_prefix_postfix_increment.c` | `x++`、`++x` | 比较前缀和后缀自增 |
| `08_prefix_increment.c` | `++x` | 连续前缀自增 |
| `09_compound_assignment.c` | `+=`、`*=` | 复合赋值运算 |
| `10_chained_assignment_warning.c` | 求值顺序与安全写法 | 将有风险的复合赋值拆成多句 |
| `11_float_double_precision.c` | `float`、`double`、`printf` | 观察浮点数与精度 |
| `12_triangle_area_heron.c` | `sqrt`、海伦公式 | 根据三边求面积 |

## 如何在 VS Code 中使用

1. 将这些 `.c` 文件复制到你已经配置好的 `D:\c project` 中，或用 VS Code 打开含有 `.vscode` 配置的项目。
2. **每次选中一个源文件**（例如 `03_three_digit_split.c`），保存后按 `F5` 运行。若想单独编译，可用 `Ctrl+Shift+B`。
3. 如果不依赖现有 VS Code 配置，在已经能找到 `gcc` 的终端中也可以这样做：

   ```sh
   gcc 03_three_digit_split.c -o 03_three_digit_split
   ```

   对使用 `pow()` / `sqrt()` 的例子，在需要显式链接数学库的平台（例如常见 Linux GCC 环境）可在命令末尾添加 `-lm`：

   ```sh
   gcc 12_triangle_area_heron.c -o 12_triangle_area_heron -lm
   ```

4. `02_compound_interest.c`、`12_triangle_area_heron.c` 的输入按课堂形式**用英文逗号分隔**，如 `3,4,5`；其他题请按各自提示输入。

## 课堂代码中的修改与注意点

- **复利计算**：按照片中的五组年限和利率保留计算方式 `cap * pow(1 + rate, n)`；补充了不支持年限的提示，避免把 `rate = 0` 当作合法利率。以上利率是**课堂示例值**，不是实时银行利率。
- **三位数拆位**：补充了 `100–999` 的范围检查；`num/10` 是整数除法，`%10` 取余数。
- **字母转换**：保留 `ch + 32` 这个课堂演示，但只允许输入 `A–Z`；**+32 依赖 ASCII 编码中的字母关系**。通用处理建议以后学习 `<ctype.h>` 的 `tolower()`。
- **圆面积**：`float r` 搭配 `scanf("%f", &r)`；输出 `double area` 可使用 `printf("%.2f", area)`。
- **运算符**：`x++` 先取旧值再自增、`++x` 先自增再取值；`10_chained_assignment_warning.c` 保留了课堂中的 `a += a -= a*a;` 作为注释，并使用**安全的分步语句**。不要把这类混合修改同一变量的表达式当作规范用法。
- **三角形面积**：补充了三角形边长检查，防止无效输入使开方出现异常。
- **文件保存**：请不要把 `.exe` 或课堂老师的课件直接上传公开仓库；上传这些你自己的 `.c` 源码与 README 即可。

## 建议自测

- `01_even_odd.c`：输入 `8` → 偶数；输入 `7` → 奇数。
- `03_three_digit_split.c`：输入 `321` → 个位 `1`、十位 `2`、百位 `3`。
- `07_prefix_postfix_increment.c`：输出 `8,6,8`。试着解释为什么。
- `09_compound_assignment.c`：输出 `150`。
- `12_triangle_area_heron.c`：输入 `3,4,5` → 面积 `6.00`。


