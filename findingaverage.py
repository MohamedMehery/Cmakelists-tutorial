import numpy as np 

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    
    query_name = input()
    average = float()
    for i in range(len(student_marks[query_name])):
        average += student_marks[query_name][i]
    average /= len(student_marks[query_name])

    format_float = "{:.2f}".format(average)
    print(f"{format_float}")
    