# 指定编译器
CC = g++
AR = ar
RM = rm

# 想要生成的目标可执行文件
TARGET = hello

# 构建目标所需要的规则
all: $(TARGET)

$(TARGET): libmylib.a
	$(CC) main.cpp -Imylib -Lmylib -lmylib -o $(TARGET)

libmylib.a: 
	$(CC) -c mylib/helloworld.cpp
	$(AR) rvs mylib/libmylib.a helloworld.o

# 虚拟目标
.PHONY: clean
clean:
	$(RM) *.o mylib/*.a $(TARGET)