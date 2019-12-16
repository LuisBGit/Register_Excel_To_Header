import FileFuncs
import xlrd

headerGen = []
start_template = "typedef struct\n{"
reg_template = "    volatile uint32_t {};"
end_template = "T{};"


def import_sheet_from_xlsx(name):
    book = xlrd.open_workbook(filename=name)
    sheet = book.sheet_by_index(0)
    return sheet


def import_from_sheet(sheet, row):
    cells = []
    i = 0
    while sheet.cell(row, i).value != "END_REG":
        cell = sheet.cell(row, i).value
        cells.append(cell)
        i = i + 1
    return cells


def write_to_out_array(raw_array, out_array):
    global start_template, reg_template, end_template
    out_array.append(start_template)
    for i in range(1, len(raw_array)):
        out_array.append(reg_template.format(raw_array[i]))
    out_array.append("} " + end_template.format(raw_array[0]))  # data format is first index always name of reg map


def generate_header(sheet, output_filename):
    out_array = []
    i = 0
    while sheet.cell(i, 0).value != "END_REG":
        temp = import_from_sheet(sheet, i)
        write_to_out_array(temp, out_array)
        out_array.append("")
        i = i + 1
    FileFuncs.write_line_by_line(output_filename, out_array)


def main():
    global start_template, reg_template, end_template
    sheet = import_sheet_from_xlsx("RCC_Test.xlsx")
    generate_header(sheet, "headerTest.h")
    print("Done")


if __name__ == "__main__":
    main()
