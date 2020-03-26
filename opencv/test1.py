import cv2
import numpy as np

img1 = cv2.imread('pf.png')
img2 = cv2.imread('pf.jpg')
img = cv2.add(img1,img2)
cv2.imshow('image', img)
cv2.waitKey(0)
cv2.destroyAllWindows()