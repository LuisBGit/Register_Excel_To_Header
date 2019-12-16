

def write_line_by_line(name, data_array):
    with open(name, "w") as txt_file:
        for line in data_array:
            txt_file.write("".join(line) + "\n")  # works with any number of elements in a line


def read_file_to_array(name):
    arr = []
    with open(name) as file:
        for i, line in enumerate(file):
            arr.append(line)
    return arr


def main():
    data = read_file_to_array("test.txt")
    test1 = []
    for i in reversed(data):
        test1.append(i.rstrip())
    write_line_by_line("test1.txt", test1)


if __name__ == "__main__":
    main()


