# 🧠 Mini Compiler with LEX & YACC

A simple compiler project built in C using **LEX** (or FLEX) and **YACC** (or Bison), designed to parse and validate code written in a simplified, C-like language.

---

## ✅ What Does It Do?

This compiler reads a source file (`output.txt`) written in pseudo-C and checks its **syntax validity**.

- If the code is **valid**:  


- If there's a **syntax error**:  


---

## 📂 File Structure

| File         | Description |
|--------------|-------------|
| `lex.l`      | LEX file — defines the lexical tokens (keywords, identifiers, numbers, etc.) |
| `project.y`  | YACC file — defines the grammar and syntax rules of the pseudo-language |
| `y.tab.c`    | Auto-generated parser C file from YACC |
| `y.tab.h`    | Auto-generated header file defining tokens as macros |
| `lex.yy.c`   | Auto-generated scanner from LEX |
| `output.txt` | Input file — contains the code to be checked |
| `comp`       | Final compiled binary of the compiler |

---

## 🛠️ How to Build & Run

### 🧱 Compilation

```bash
flex lex.l
bison -d project.y
gcc lex.yy.c y.tab.c -o comp

./comp < output.txt

int x = 3;

if (x > 2) {
    x = x + 1;
}
✅ It's Works!


