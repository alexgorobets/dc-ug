import os
import sys
from PyQt5.QtWidgets import QApplication, QLabel


if __name__ == '__main__':
    app = QApplication([])
    label = QLabel('Hello world!')
    label.show()
    app.exec_()
