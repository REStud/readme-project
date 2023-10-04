from pdf2txt import PdfDocument
import sys

def read_txt(fname):
    return '\n'.join(
        [para.strip() for para in PdfDocument(fname).paragraphs]
    )

if __name__ == '__main__':
    fname = sys.argv[1]
    with open(sys.argv[2], 'wt') as f:
        f.write(read_txt(fname))